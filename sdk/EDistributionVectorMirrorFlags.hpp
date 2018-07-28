#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EDistributionVectorMirrorFlags
{
   EDVMF_Same = 0,
   EDVMF_Different = 1,
   EDVMF_Mirror = 2,
   EDVMF_MAX = 3,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
