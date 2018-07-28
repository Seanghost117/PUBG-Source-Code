#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EDamageVictimActorType
{
   EDamageVictimActorType__Character = 0,
   EDamageVictimActorType__Vehicle = 1,
   EDamageVictimActorType__Wheel = 2,
   EDamageVictimActorType__DestructibleActor = 3,
   EDamageVictimActorType__EDamageVictimActorType_MAX = 4,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
