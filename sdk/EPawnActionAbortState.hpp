#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EPawnActionAbortState
{
   EPawnActionAbortState__NeverStarted = 0,
   EPawnActionAbortState__NotBeingAborted = 1,
   EPawnActionAbortState__MarkPendingAbort = 2,
   EPawnActionAbortState__LatentAbortInProgress = 3,
   EPawnActionAbortState__AbortDone = 4,
   EPawnActionAbortState__MAX = 5,
   EPawnActionAbortState__EPawnActionAbortState_MAX = 6,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
