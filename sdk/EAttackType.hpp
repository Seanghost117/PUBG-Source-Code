#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EAttackType
{
   EAttackType__None = 0,
   EAttackType__Weapon = 1,
   EAttackType__VehicleCrash = 2,
   EAttackType__VehicleExplosion = 3,
   EAttackType__Fall = 4,
   EAttackType__BlueZone = 5,
   EAttackType__RedZone = 6,
   EAttackType__EAttackType_MAX = 7,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
