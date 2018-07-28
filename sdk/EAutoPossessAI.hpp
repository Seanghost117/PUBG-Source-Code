#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EAutoPossessAI
{
   EAutoPossessAI__Disabled = 0,
   EAutoPossessAI__PlacedInWorld = 1,
   EAutoPossessAI__Spawned = 2,
   EAutoPossessAI__PlacedInWorldOrSpawned = 3,
   EAutoPossessAI__EAutoPossessAI_MAX = 4,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
