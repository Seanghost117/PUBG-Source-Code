#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EDistributionVectorLockFlags
{
   EDVLF_None = 0,
   EDVLF_XY = 1,
   EDVLF_XZ = 2,
   EDVLF_YZ = 3,
   EDVLF_XYZ = 4,
   EDVLF_MAX = 5,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
