#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum ENavPathEvent
{
   ENavPathEvent__Cleared = 0,
   ENavPathEvent__NewPath = 1,
   ENavPathEvent__UpdatedDueToGoalMoved = 2,
   ENavPathEvent__UpdatedDueToNavigationChanged = 3,
   ENavPathEvent__Invalidated = 4,
   ENavPathEvent__RePathFailed = 5,
   ENavPathEvent__MetaPathUpdate = 6,
   ENavPathEvent__Custom = 7,
   ENavPathEvent__ENavPathEvent_MAX = 8,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
