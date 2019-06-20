#pragma once

#include "Modules/ModuleManager.h"

class FSetAnimInstanceClassFixModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};
