#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum ELightingBuildQuality
{
   Quality_Preview = 0,
   Quality_Medium = 1,
   Quality_High = 2,
   Quality_Production = 3,
   Quality_MAX = 4,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
