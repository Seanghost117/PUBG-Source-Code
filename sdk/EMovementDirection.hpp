#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EMovementDirection
{
   EMovementDirection__F_Direction = 0,
   EMovementDirection__L_Direction = 1,
   EMovementDirection__R_Direction = 2,
   EMovementDirection__B_Direction = 3,
   EMovementDirection__FL_Direction = 4,
   EMovementDirection__FR_Direction = 5,
   EMovementDirection__BL_Direction = 6,
   EMovementDirection__BR_Direction = 7,
   EMovementDirection__EMovementDirection_MAX = 8,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
