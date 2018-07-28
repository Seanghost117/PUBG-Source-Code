#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EParticleCollisionMode
{
   EParticleCollisionMode__SceneDepth = 0,
   EParticleCollisionMode__DistanceField = 1,
   EParticleCollisionMode__HeightBuffer = 2,
   EParticleCollisionMode__EParticleCollisionMode_MAX = 3,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
