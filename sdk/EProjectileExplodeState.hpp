#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EProjectileExplodeState
{
   EProjectileExplodeState__NotExplode = 0,
   EProjectileExplodeState__ImpactExplode = 1,
   EProjectileExplodeState__TimerExplode = 2,
   EProjectileExplodeState__EProjectileExplodeState_MAX = 3,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
