#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EOpacitySourceMode
{
   OSM_Alpha = 0,
   OSM_ColorBrightness = 1,
   OSM_RedChannel = 2,
   OSM_GreenChannel = 3,
   OSM_BlueChannel = 4,
   OSM_MAX = 5,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
