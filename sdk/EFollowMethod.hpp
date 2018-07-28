#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EFollowMethod
{
   LookAtLocation = 0,
   FollowCamera = 1,
   FollowPawn = 2,
   Stationary = 3,
   EFollowMethod_MAX = 4,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
