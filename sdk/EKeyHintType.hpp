#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EKeyHintType
{
   EKeyHintType__Menu = 0,
   EKeyHintType__Parachuting = 1,
   EKeyHintType__Character = 2,
   EKeyHintType__Driver = 3,
   EKeyHintType__Rider = 4,
   EKeyHintType__WeaponUse = 5,
   EKeyHintType__WeaponChange = 6,
   EKeyHintType__ADS = 7,
   EKeyHintType__Aim = 8,
   EKeyHintType__ADS_8x15x = 9,
   EKeyHintType__Throwing = 10,
   EKeyHintType__Heal = 11,
   EKeyHintType__Swimming = 12,
   EKeyHintType__None = 13,
   EKeyHintType__EKeyHintType_MAX = 14,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
