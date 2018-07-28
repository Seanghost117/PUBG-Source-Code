#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EKillcamDisplayCode
{
   EKillcamDisplayCode__NotVisible = 0,
   EKillcamDisplayCode__OptionDisabled = 1,
   EKillcamDisplayCode__Recording = 2,
   EKillcamDisplayCode__Playable = 3,
   EKillcamDisplayCode__Replay = 4,
   EKillcamDisplayCode__FailToLoad = 5,
   EKillcamDisplayCode__DemoFailure = 6,
   EKillcamDisplayCode__DetectedUnusualMovement = 7,
   EKillcamDisplayCode__EKillcamDisplayCode_MAX = 8,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
