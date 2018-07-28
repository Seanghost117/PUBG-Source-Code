#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EPhysMaterialType
{
   EPhysMaterialType__Unknown = 0,
   EPhysMaterialType__Asphalt = 1,
   EPhysMaterialType__Dirt = 2,
   EPhysMaterialType__Water = 3,
   EPhysMaterialType__Wood = 4,
   EPhysMaterialType__Stone = 5,
   EPhysMaterialType__Metal = 6,
   EPhysMaterialType__EPhysMaterialType_MAX = 7,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
