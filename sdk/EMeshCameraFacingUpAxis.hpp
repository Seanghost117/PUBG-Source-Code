#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EMeshCameraFacingUpAxis
{
   CameraFacing_NoneUP = 0,
   CameraFacing_ZUp = 1,
   CameraFacing_NegativeZUp = 2,
   CameraFacing_YUp = 3,
   CameraFacing_NegativeYUp = 4,
   CameraFacing_MAX = 5,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
