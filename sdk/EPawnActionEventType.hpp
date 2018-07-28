#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EPawnActionEventType
{
   EPawnActionEventType__Invalid = 0,
   EPawnActionEventType__FailedToStart = 1,
   EPawnActionEventType__InstantAbort = 2,
   EPawnActionEventType__FinishedAborting = 3,
   EPawnActionEventType__FinishedExecution = 4,
   EPawnActionEventType__Push = 5,
   EPawnActionEventType__EPawnActionEventType_MAX = 6,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
