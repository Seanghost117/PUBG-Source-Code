#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EFrictionCombineMode
{
   EFrictionCombineMode__Average = 0,
   EFrictionCombineMode__Min = 1,
   EFrictionCombineMode__Multiply = 2,
   EFrictionCombineMode__Max = 3,
   EFrictionCombineMode__EFrictionCombineMode_MAX = 4,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
