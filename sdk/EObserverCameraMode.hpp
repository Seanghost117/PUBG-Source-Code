#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EObserverCameraMode
{
   EObserverCameraMode__FixedCamera = 0,
   EObserverCameraMode__FreeCamera = 1,
   EObserverCameraMode__PlayerCamera = 2,
   EObserverCameraMode__FollowCamera = 3,
   EObserverCameraMode__EObserverCameraMode_MAX = 4,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
