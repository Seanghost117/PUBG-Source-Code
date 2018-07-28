#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EPathFollowingRequestResult
{
   EPathFollowingRequestResult__Failed = 0,
   EPathFollowingRequestResult__AlreadyAtGoal = 1,
   EPathFollowingRequestResult__RequestSuccessful = 2,
   EPathFollowingRequestResult__EPathFollowingRequestResult_MAX = 3,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
