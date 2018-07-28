#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EGuideKeyType
{
   EGuideKeyType__None = 0,
   EGuideKeyType__PickUp = 1,
   EGuideKeyType__PickUpAndEquip = 2,
   EGuideKeyType__PickUpAndPickUpAmount = 3,
   EGuideKeyType__Unequip = 4,
   EGuideKeyType__DetachAll = 5,
   EGuideKeyType__DetachAllAndSwitch = 6,
   EGuideKeyType__DetachAndDetachAllAndSwitch = 7,
   EGuideKeyType__Drop = 8,
   EGuideKeyType__DropAndEquip = 9,
   EGuideKeyType__DropAndDropAmount = 10,
   EGuideKeyType__DropAndDropAll = 11,
   EGuideKeyType__Equip = 12,
   EGuideKeyType__EquipAndQuickEquip = 13,
   EGuideKeyType__XQuickEquip = 14,
   EGuideKeyType__XHoldQuickEquip = 15,
   EGuideKeyType__Swap = 16,
   EGuideKeyType__Use = 17,
   EGuideKeyType__Confirm = 18,
   EGuideKeyType__Cancel = 19,
   EGuideKeyType__SwitchSlot = 20,
   EGuideKeyType__EGuideKeyType_MAX = 21,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
