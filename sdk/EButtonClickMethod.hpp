#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EButtonClickMethod
{
   EButtonClickMethod__DownAndUp = 0,
   EButtonClickMethod__MouseDown = 1,
   EButtonClickMethod__MouseUp = 2,
   EButtonClickMethod__PreciseClick = 3,
   EButtonClickMethod__EButtonClickMethod_MAX = 4,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
