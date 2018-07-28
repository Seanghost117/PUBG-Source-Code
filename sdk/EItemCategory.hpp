#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EItemCategory
{
   EItemCategory__None = 0,
   EItemCategory__Equipment = 1,
   EItemCategory__Weapon = 2,
   EItemCategory__Attachment = 3,
   EItemCategory__Ammunition = 4,
   EItemCategory__Use = 5,
   EItemCategory__Skin = 6,
   EItemCategory__EItemCategory_MAX = 7,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
