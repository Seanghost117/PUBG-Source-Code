#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EPrimaryAssetCookRule
{
   EPrimaryAssetCookRule__Unknown = 0,
   EPrimaryAssetCookRule__NeverCook = 1,
   EPrimaryAssetCookRule__DevelopmentCook = 2,
   EPrimaryAssetCookRule__AlwaysCook = 3,
   EPrimaryAssetCookRule__EPrimaryAssetCookRule_MAX = 4,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
