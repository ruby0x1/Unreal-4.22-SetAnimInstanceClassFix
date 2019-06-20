#include "SetAnimInstanceClassFixBPLibrary.h"
#include "SetAnimInstanceClassFix.h"
#include "Components/SkeletalMeshComponent.h"
#include "CoreMinimal.h"

USetAnimInstanceClassFixBPLibrary::USetAnimInstanceClassFixBPLibrary(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{

}

void USetAnimInstanceClassFixBPLibrary::SetAnimInstanceClassFix(USkeletalMeshComponent* SkeletalMesh, UClass* NewClass)
{
    // see this for details 
    // https://answers.unrealengine.com/questions/887556/set-anim-instance-node-causing-crashes.html?childToView=903467
    
    // We may be doing parallel evaluation on the current anim instance
    // Calling this here with true will block this init till that thread completes
    // and it is safe to continue
    const bool bBlockOnTask = true; // wait on evaluation task so it is safe to swap the buffers
    const bool bPerformPostAnimEvaluation = true; // Do PostEvaluation so we make sure to swap the buffers back. 
    SkeletalMesh->HandleExistingParallelEvaluationTask(bBlockOnTask, bPerformPostAnimEvaluation);
    SkeletalMesh->SetAnimInstanceClass(NewClass);
}

