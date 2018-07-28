#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EBlendableLocation
{
   BL_AfterTonemapping = 0,
   BL_BeforeTonemapping = 1,
   BL_BeforeTranslucency = 2,
   BL_ReplacingTonemapper = 3,
   BL_MAX = 4,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
