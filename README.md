# Charisma Plug-N-Play package for Unreal

This Unreal Engine plugin is verified to work with projects using Unreal Engine versions `5.2` and `5.3`.

If you have any questions or need a hand, please reach out to us at [hello@charisma.ai](mailto:hello@charisma.ai)!

## Getting started

**Important:** Before setting up the Charisma Plug-N-Play for Unreal Engine, you’ll need to have created a Pro story (not a Starter story!), which requires a Charisma licence. Please visit the [licencing docs on our website](https://charisma.ai/docs/licencing) for more info!

1. If you haven’t already, go ahead and create an Unreal **C++** project. Make sure you are using a version of the engine that is supported by this plugin.

2. Make sure to install the [Charisma Unreal SDK](https://github.com/charisma-ai/charisma-sdk-unreal) in order to enable the Plug-N-Play plugin to work.

3. Head to the [Releases page](https://github.com/charisma-ai/unreal-plug-n-play/releases) of this GitHub repository and download the latest release. Unzip the contents into the `/Plugins` folder located at the root of your project. If this folder doesn’t exist, create it!
   
4. Plug-n-Play uses Oculus LipsyncOVR package to manage humanoid character lipsyncing. This package can be downloaded here: [LipsyncOVR for Unreal Engine](https://developer.oculus.com/downloads/package/oculus-lipsync-unreal/). Install it in the project the same way as with the SDK and Plug-n-Play

5. Close the Unreal Engine editor, regenerate UProject solution, and rebuild the project in Visual Studio. If you have problems building LipsyncOVR, consult the Troubleshooting section at the bottom of this page.

6. When you next open the editor, verify the plugin loaded correctly by navigating to `Settings -> Plugins` and locating the Charisma plugin. It should look something like this:

![StoryId](/Docs/EnablePlugin.png)

7. You can now start using Charisma in Unreal Engine! 🎉

## Using the Plug-N-Play

Please refer to our [SDK Documentation page](https://charisma.ai/docs/sdks) and [Unreal Tutorial series](https://www.youtube.com/playlist?list=PLJL7mxAoErKy_ByCa6C1vb3FEnQnE1-kp) for more information on how to setup and use the Plug-N-Play for your stories!

## Enabling microphone input in Unreal Engine

In order to be able to use microphone/voice input, you must modify the `DefaultEngine.ini` file at the project level.

You can find this configuration file under `PROJECT FOLDER -> Config -> DefaultEngine.ini`

Inside this config file, add these lines to enbable microphone and voice input:

```
[Voice]
bEnabled=true

[SystemSettings]
voice.SilenceDetectionThreshold=-1
voice.MicNoiseGateThreshold=-1

[OnlineSubsystem]
bHasVoiceEnabled=true
```

## LipsyncOVR Troubleshooting

You may come across various build issues when building the LipsyncOVR package. This is because the plugin was built for older versions of Unreal Engine, and some variables and method calls need to be updated. Here are the common steps for fixing the issues for UE version 5.2 through 5.4:

### 5.2 Compiler Errors:

- Remove lines 26 and 27 from OVRLipSyncLiveActorComponent.cpp
    - `#include "AndroidPermissionCallbackProxy.h"`
    - `#include "AndroidPermissionFunctionLibrary.h"`
- Replace instances of `#include "Classes/Sound/SoundWave.h"` with `#include "Sound/SoundWave.h"`
- Replace instances of `#include "Classes/Components/AudioComponent.h"` with `#include "Components/AudioComponent.h"`
- Replace instances of `#include "Classes/Components/SkeletalMeshComponent.h"` with `#include "Components/SkeletalMeshComponent.h"`
-User error: Default device is no longer supported; ue will automatically grab the closest mic device if you provide an empty string
  - Replace `#define DEFAULT_DEVICE_NAME TEXT("Default Device")` with `#define DEFAULT_DEVICE_NAME TEXT("")`
    
### 5.3 - Same as all above, and also:

- Replace instance of `#include "AssetRegistryModule.h"` from OvrLipsyncEditorModuleto `#include "AssetRegistry/AssetRegistryModule.h"`
- Replace instances of `#include "Voice/Public/VoiceModule.h"` to `#include "VoiceModule.h"` 
- In OVRLipsyncEditorModule, change the line `CreatePackage(NULL, *SequencePath);` to `CreatePackage(*SequencePath);`

### 5.4 - Same as all above, and also:

- In OVRLipSyncEditorModule.cpp change line `if (SoundWave->InitAudioResource(AudioDevice->GetRuntimeFormat(SoundWave)))` to `if (SoundWave->InitAudioResource(SoundWave->GetRuntimeFormat()))`
- To fix LogOvrLipsync errors:
  - Add line `#include "OVRLipSyncModule.h"` to line index 27, in `OvrLipsyncLiveACtorComponent.cpp`
 
### 5.5 -  Same as all above, and also:

- In OVRLipSyncEditorModule.cpp change line `SoundWave->DecompressionType = DTYPE_Native;` to `SoundWave->DecompressionType = DTYPE_RealTime;`
