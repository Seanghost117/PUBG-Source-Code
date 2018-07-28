#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EPinHidingMode
{
   EPinHidingMode__NeverAsPin = 0,
   EPinHidingMode__PinHiddenByDefault = 1,
   EPinHidingMode__PinShownByDefault = 2,
   EPinHidingMode__AlwaysAsPin = 3,
   EPinHidingMode__EPinHidingMode_MAX = 4,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
