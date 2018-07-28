#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EFollowCameraMode
{
   EFollowCameraMode__CharacterCamera = 0,
   EFollowCameraMode__VehicleCamera = 1,
   EFollowCameraMode__AircraftCamera = 2,
   EFollowCameraMode__ParachutingCamera = 3,
   EFollowCameraMode__FallingWithParachuteCamera = 4,
   EFollowCameraMode__EFollowCameraMode_MAX = 5,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
