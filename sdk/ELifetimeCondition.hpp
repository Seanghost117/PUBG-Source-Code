#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum ELifetimeCondition
{
   COND_None = 0,
   COND_InitialOnly = 1,
   COND_OwnerOnly = 2,
   COND_SkipOwner = 3,
   COND_SimulatedOnly = 4,
   COND_AutonomousOnly = 5,
   COND_SimulatedOrPhysics = 6,
   COND_InitialOrOwner = 7,
   COND_Custom = 8,
   COND_ReplayOrOwner = 9,
   COND_ReplayOnly = 10,
   COND_SimulatedOnlyNoReplay = 11,
   COND_SimulatedOrPhysicsNoReplay = 12,
   COND_SkipReplay = 13,
   COND_Max = 14,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
