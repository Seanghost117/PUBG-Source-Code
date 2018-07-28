#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EParticleEventType
{
   EPET_Any = 0,
   EPET_Spawn = 1,
   EPET_Death = 2,
   EPET_Collision = 3,
   EPET_Burst = 4,
   EPET_Blueprint = 5,
   EPET_MAX = 6,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
