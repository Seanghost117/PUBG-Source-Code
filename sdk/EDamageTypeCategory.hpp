#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EDamageTypeCategory
{
   EDamageTypeCategory__Damage_None = 0,
   EDamageTypeCategory__Damage_Instant = 1,
   EDamageTypeCategory__Damage_Gun = 2,
   EDamageTypeCategory__Damage_Melee = 3,
   EDamageTypeCategory__Damage_ZombieMelee = 4,
   EDamageTypeCategory__Damage_Groggy = 5,
   EDamageTypeCategory__Damage_BlueZone = 6,
   EDamageTypeCategory__Damage_VehicleHit = 7,
   EDamageTypeCategory__Damage_VehicleCrashHit = 8,
   EDamageTypeCategory__Damage_Molotov = 9,
   EDamageTypeCategory__Damage_Explosion = 10,
   EDamageTypeCategory__Damage_Explosion_Grenade = 11,
   EDamageTypeCategory__Damage_Explosion_RedZone = 12,
   EDamageTypeCategory__Damage_Explosion_Vehicle = 13,
   EDamageTypeCategory__Damage_Instant_Fall = 14,
   EDamageTypeCategory__Damage_Drown = 15,
   EDamageTypeCategory__Damage_MAX = 16,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
