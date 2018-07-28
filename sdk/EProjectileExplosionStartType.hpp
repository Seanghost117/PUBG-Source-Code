#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EProjectileExplosionStartType
{
   EProjectileExplosionStartType__NotStart = 0,
   EProjectileExplosionStartType__Impact = 1,
   EProjectileExplosionStartType__Delay = 2,
   EProjectileExplosionStartType__ImpactOrDelay = 3,
   EProjectileExplosionStartType__EProjectileExplosionStartType_MAX = 4,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
