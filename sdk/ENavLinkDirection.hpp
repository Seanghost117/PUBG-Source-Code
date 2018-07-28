#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum ENavLinkDirection
{
   ENavLinkDirection__BothWays = 0,
   ENavLinkDirection__LeftToRight = 1,
   ENavLinkDirection__RightToLeft = 2,
   ENavLinkDirection__ENavLinkDirection_MAX = 3,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
