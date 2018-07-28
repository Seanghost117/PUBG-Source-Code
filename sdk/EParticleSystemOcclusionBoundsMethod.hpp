#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EParticleSystemOcclusionBoundsMethod
{
   EPSOBM_None = 0,
   EPSOBM_ParticleBounds = 1,
   EPSOBM_CustomBounds = 2,
   EPSOBM_MAX = 3,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
