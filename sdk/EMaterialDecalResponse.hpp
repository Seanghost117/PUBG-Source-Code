#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EMaterialDecalResponse
{
   MDR_None = 0,
   MDR_ColorNormalRoughness = 1,
   MDR_Color = 2,
   MDR_ColorNormal = 3,
   MDR_ColorRoughness = 4,
   MDR_Normal = 5,
   MDR_NormalRoughness = 6,
   MDR_Roughness = 7,
   MDR_MAX = 8,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
