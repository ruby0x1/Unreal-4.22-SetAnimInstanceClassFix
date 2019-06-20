# About 

This is a project level plugin (useful for BP only users) to fix a crash in Unreal 4.22.

More details: 
https://answers.unrealengine.com/questions/887556/set-anim-instance-node-causing-crashes.html?childToView=903467

# install

To install, drop the `SetAnimInstanceClassFix` folder as is,
inside the `Plugins/` folder of your project.

example:
`<your game folder>/Plugins/SetAnimInstanceClassFix/`

# use

This replaces "Set Anim Instance Class" (Target is Skeletal Mesh Component) node.
It's a temporary fix till the real one lands in Unreal itself.

The node is under "4.22 Workaround | Anim BP" as "Set Anim Instance Class Fix":

![](https://i.imgur.com/IgIiDR5.png)

- Keep your original set anim instance class node, rewire around it. 
  Add a todo comment for when Unreal fixes this. 
  When it does, you can undo and delete the plugin.

![](https://i.imgur.com/CEeyFQT.png)

# notes

- It's built against Unreal 4.22.2 but should work with 4.22.x as far as I can tell.
- Only built for Win64 (can add Mac easily if requested).
- It shouldn't need c++ enabled or installed.
- Not sure if it needs to be enabled from the Plugins settings menu inside Unreal. 
