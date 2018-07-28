#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum ERawCurveTrackTypes
{
   ERawCurveTrackTypes__RCT_Float = 0,
   ERawCurveTrackTypes__RCT_Vector = 1,
   ERawCurveTrackTypes__RCT_Transform = 2,
   ERawCurveTrackTypes__RCT_MAX = 3,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
