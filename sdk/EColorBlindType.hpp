#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EColorBlindType
{
   EColorBlindType__Normal = 0,
   EColorBlindType__Deuteranopia = 1,
   EColorBlindType__Protanopia = 2,
   EColorBlindType__Tritanopia = 3,
   EColorBlindType__EColorBlindType_MAX = 4,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
