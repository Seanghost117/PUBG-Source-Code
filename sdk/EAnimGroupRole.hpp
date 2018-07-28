#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EAnimGroupRole
{
   EAnimGroupRole__CanBeLeader = 0,
   EAnimGroupRole__AlwaysFollower = 1,
   EAnimGroupRole__AlwaysLeader = 2,
   EAnimGroupRole__TransitionLeader = 3,
   EAnimGroupRole__EAnimGroupRole_MAX = 4,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
