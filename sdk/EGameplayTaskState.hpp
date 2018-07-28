#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EGameplayTaskState
{
   EGameplayTaskState__Uninitialized = 0,
   EGameplayTaskState__AwaitingActivation = 1,
   EGameplayTaskState__Paused = 2,
   EGameplayTaskState__Active = 3,
   EGameplayTaskState__Finished = 4,
   EGameplayTaskState__EGameplayTaskState_MAX = 5,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
