#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EIndirectLightingCacheQuality
{
   ILCQ_Off = 0,
   ILCQ_Point = 1,
   ILCQ_Volume = 2,
   ILCQ_MAX = 3,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
