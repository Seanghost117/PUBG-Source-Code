#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EGameplayTaskRunResult
{
   EGameplayTaskRunResult__Error = 0,
   EGameplayTaskRunResult__Failed = 1,
   EGameplayTaskRunResult__Success_Paused = 2,
   EGameplayTaskRunResult__Success_Active = 3,
   EGameplayTaskRunResult__Success_Finished = 4,
   EGameplayTaskRunResult__EGameplayTaskRunResult_MAX = 5,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
