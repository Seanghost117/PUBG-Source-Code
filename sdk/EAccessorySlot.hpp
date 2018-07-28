#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EAccessorySlot
{
   EAccessorySlot__Slot_Primary = 0,
   EAccessorySlot__Slot_Secondary = 1,
   EAccessorySlot__Slot_SideArm = 2,
   EAccessorySlot__Slot_Melee = 3,
   EAccessorySlot__Slot_Thrown = 4,
   EAccessorySlot__Slot_MAX = 5,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
