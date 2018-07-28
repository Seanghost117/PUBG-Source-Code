#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum ECastableItemType
{
   ECastableItemType__None = 0,
   ECastableItemType__Bandage = 1,
   ECastableItemType__FirstAid = 2,
   ECastableItemType__Medkit = 3,
   ECastableItemType__EnergyDrink = 4,
   ECastableItemType__Painkiller = 5,
   ECastableItemType__Adrenaline = 6,
   ECastableItemType__GasCan = 7,
   ECastableItemType__ECastableItemType_MAX = 8,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
