#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EPathFollowingResult
{
   EPathFollowingResult__Success = 0,
   EPathFollowingResult__Blocked = 1,
   EPathFollowingResult__OffPath = 2,
   EPathFollowingResult__Aborted = 3,
   EPathFollowingResult__Skipped_DEPRECATED = 4,
   EPathFollowingResult__Invalid = 5,
   EPathFollowingResult__EPathFollowingResult_MAX = 6,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
