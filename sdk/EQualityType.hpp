#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EQualityType
{
   EQualityType__EMainQuality = 0,
   EQualityType__EViewDistanceQuality = 1,
   EQualityType__EShadowQuality = 2,
   EQualityType__EAntiAliasingQuality = 3,
   EQualityType__ETextureQuality = 4,
   EQualityType__EVisualEffectQuality = 5,
   EQualityType__EPostProcessingQuality = 6,
   EQualityType__EFoliageQuality = 7,
   EQualityType__EQualityType_MAX = 8,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
