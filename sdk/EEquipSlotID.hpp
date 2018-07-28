#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EEquipSlotID
{
   EEquipSlotID__Head = 0,
   EEquipSlotID__Eyes = 1,
   EEquipSlotID__Mask = 2,
   EEquipSlotID__Torso = 3,
   EEquipSlotID__TorsoArmor = 4,
   EEquipSlotID__Outer = 5,
   EEquipSlotID__Backpack = 6,
   EEquipSlotID__Hands = 7,
   EEquipSlotID__Legs = 8,
   EEquipSlotID__Feet = 9,
   EEquipSlotID__Belt = 10,
   EEquipSlotID__WeaponPrimary = 11,
   EEquipSlotID__WeaponSecondary = 12,
   EEquipSlotID__WeaponMelee = 13,
   EEquipSlotID__WeaponThrowable = 14,
   EEquipSlotID__MaxOrNone = 15,
   EEquipSlotID__EEquipSlotID_MAX = 16,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
