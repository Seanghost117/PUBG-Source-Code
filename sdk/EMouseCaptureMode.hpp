#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EMouseCaptureMode
{
   EMouseCaptureMode__NoCapture = 0,
   EMouseCaptureMode__CapturePermanently = 1,
   EMouseCaptureMode__CapturePermanently_IncludingInitialMouseDown = 2,
   EMouseCaptureMode__CaptureDuringMouseDown = 3,
   EMouseCaptureMode__CaptureDuringRightMouseDown = 4,
   EMouseCaptureMode__EMouseCaptureMode_MAX = 5,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
