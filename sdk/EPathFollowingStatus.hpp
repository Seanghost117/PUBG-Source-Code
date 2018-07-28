#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EPathFollowingStatus
{
   EPathFollowingStatus__Idle = 0,
   EPathFollowingStatus__Waiting = 1,
   EPathFollowingStatus__Paused = 2,
   EPathFollowingStatus__Moving = 3,
   EPathFollowingStatus__EPathFollowingStatus_MAX = 4,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
