#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum ECompositeTextureMode
{
   CTM_Disabled = 0,
   CTM_NormalRoughnessToRed = 1,
   CTM_NormalRoughnessToGreen = 2,
   CTM_NormalRoughnessToBlue = 3,
   CTM_NormalRoughnessToAlpha = 4,
   CTM_MAX = 5,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
