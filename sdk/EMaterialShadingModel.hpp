#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EMaterialShadingModel
{
   MSM_Unlit = 0,
   MSM_DefaultLit = 1,
   MSM_Subsurface = 2,
   MSM_PreintegratedSkin = 3,
   MSM_ClearCoat = 4,
   MSM_SubsurfaceProfile = 5,
   MSM_TwoSidedFoliage = 6,
   MSM_Hair = 7,
   MSM_Cloth = 8,
   MSM_Eye = 9,
   MSM_MAX = 10,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
