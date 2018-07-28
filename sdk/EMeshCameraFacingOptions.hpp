#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EMeshCameraFacingOptions
{
   XAxisFacing_NoUp = 0,
   XAxisFacing_ZUp = 1,
   XAxisFacing_NegativeZUp = 2,
   XAxisFacing_YUp = 3,
   XAxisFacing_NegativeYUp = 4,
   LockedAxis_ZAxisFacing = 5,
   LockedAxis_NegativeZAxisFacing = 6,
   LockedAxis_YAxisFacing = 7,
   LockedAxis_NegativeYAxisFacing = 8,
   VelocityAligned_ZAxisFacing = 9,
   VelocityAligned_NegativeZAxisFacing = 10,
   VelocityAligned_YAxisFacing = 11,
   VelocityAligned_NegativeYAxisFacing = 12,
   EMeshCameraFacingOptions_MAX = 13,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
