#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EEndPlayReason
{
   EEndPlayReason__Destroyed = 0,
   EEndPlayReason__LevelTransition = 1,
   EEndPlayReason__EndPlayInEditor = 2,
   EEndPlayReason__RemovedFromWorld = 3,
   EEndPlayReason__Quit = 4,
   EEndPlayReason__EEndPlayReason_MAX = 5,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
