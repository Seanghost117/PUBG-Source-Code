#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EMenuPlacement
{
   MenuPlacement_BelowAnchor = 0,
   MenuPlacement_CenteredBelowAnchor = 1,
   MenuPlacement_BelowRightAnchor = 2,
   MenuPlacement_ComboBox = 3,
   MenuPlacement_ComboBoxRight = 4,
   MenuPlacement_MenuRight = 5,
   MenuPlacement_AboveAnchor = 6,
   MenuPlacement_CenteredAboveAnchor = 7,
   MenuPlacement_AboveRightAnchor = 8,
   MenuPlacement_MenuLeft = 9,
   MenuPlacement_Center = 10,
   MenuPlacement_RightLeftCenter = 11,
   MenuPlacement_MAX = 12,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
