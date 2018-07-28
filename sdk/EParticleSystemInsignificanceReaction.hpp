#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EParticleSystemInsignificanceReaction
{
   EParticleSystemInsignificanceReaction__Auto = 0,
   EParticleSystemInsignificanceReaction__Complete = 1,
   EParticleSystemInsignificanceReaction__DisableTick = 2,
   EParticleSystemInsignificanceReaction__DisableTickAndKill = 3,
   EParticleSystemInsignificanceReaction__Num = 4,
   EParticleSystemInsignificanceReaction__EParticleSystemInsignificanceReaction_MAX = 5,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
