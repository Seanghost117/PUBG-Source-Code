#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EMaxConcurrentResolutionRule
{
   EMaxConcurrentResolutionRule__PreventNew = 0,
   EMaxConcurrentResolutionRule__StopOldest = 1,
   EMaxConcurrentResolutionRule__StopFarthestThenPreventNew = 2,
   EMaxConcurrentResolutionRule__StopFarthestThenOldest = 3,
   EMaxConcurrentResolutionRule__StopLowestPriority = 4,
   EMaxConcurrentResolutionRule__StopQuietest = 5,
   EMaxConcurrentResolutionRule__StopLowestPriorityThenPreventNew = 6,
   EMaxConcurrentResolutionRule__EMaxConcurrentResolutionRule_MAX = 7,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
