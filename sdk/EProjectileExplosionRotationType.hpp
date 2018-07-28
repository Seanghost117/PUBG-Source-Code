#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EProjectileExplosionRotationType
{
   EProjectileExplosionRotationType__ProjectileUpVector = 0,
   EProjectileExplosionRotationType__WorldUpVector = 1,
   EProjectileExplosionRotationType__EProjectileExplosionRotationType_MAX = 2,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
