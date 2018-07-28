#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EDepthOfFieldFunctionValue
{
   TDOF_NearAndFarMask = 0,
   TDOF_NearMask = 1,
   TDOF_FarMask = 2,
   TDOF_CircleOfConfusionRadius = 3,
   TDOF_MAX = 4,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
