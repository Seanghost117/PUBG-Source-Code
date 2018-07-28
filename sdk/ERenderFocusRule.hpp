#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum ERenderFocusRule
{
   ERenderFocusRule__Always = 0,
   ERenderFocusRule__NonPointer = 1,
   ERenderFocusRule__NavigationOnly = 2,
   ERenderFocusRule__Never = 3,
   ERenderFocusRule__ERenderFocusRule_MAX = 4,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
