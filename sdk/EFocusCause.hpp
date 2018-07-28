#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EFocusCause
{
   EFocusCause__Mouse = 0,
   EFocusCause__Navigation = 1,
   EFocusCause__SetDirectly = 2,
   EFocusCause__Cleared = 3,
   EFocusCause__OtherWidgetLostFocus = 4,
   EFocusCause__WindowActivate = 5,
   EFocusCause__EFocusCause_MAX = 6,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
