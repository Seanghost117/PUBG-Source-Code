#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EParticleCollisionResponse
{
   EParticleCollisionResponse__Bounce = 0,
   EParticleCollisionResponse__Stop = 1,
   EParticleCollisionResponse__Kill = 2,
   EParticleCollisionResponse__EParticleCollisionResponse_MAX = 3,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
