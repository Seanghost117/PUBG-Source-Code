#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum ELandscapeLayerBlendType
{
   LB_WeightBlend = 0,
   LB_AlphaBlend = 1,
   LB_HeightBlend = 2,
   LB_MAX = 3,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
