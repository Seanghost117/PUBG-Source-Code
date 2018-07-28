#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EPawnActionResult
{
   EPawnActionResult__NotStarted = 0,
   EPawnActionResult__InProgress = 1,
   EPawnActionResult__Success = 2,
   EPawnActionResult__Failed = 3,
   EPawnActionResult__Aborted = 4,
   EPawnActionResult__EPawnActionResult_MAX = 5,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
