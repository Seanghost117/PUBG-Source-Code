#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum ELandscapeCustomizedCoordType
{
   LCCT_None = 0,
   LCCT_CustomUV0 = 1,
   LCCT_CustomUV1 = 2,
   LCCT_CustomUV2 = 3,
   LCCT_WeightMapUV = 4,
   LCCT_MAX = 5,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
