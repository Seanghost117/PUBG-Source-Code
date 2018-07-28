#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EAnimWeaponType
{
   EAnimWeaponType__None = 0,
   EAnimWeaponType__Rifle = 1,
   EAnimWeaponType__Pistol = 2,
   EAnimWeaponType__Throwable = 3,
   EAnimWeaponType__Melee = 4,
   EAnimWeaponType__EAnimWeaponType_MAX = 5,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
