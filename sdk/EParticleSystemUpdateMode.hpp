#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EParticleSystemUpdateMode
{
   EPSUM_RealTime = 0,
   EPSUM_FixedTime = 1,
   EPSUM_MAX = 2,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
