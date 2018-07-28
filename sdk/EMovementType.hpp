#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EMovementType
{
   M_StandWalk = 0,
   M_StandRun = 1,
   M_StandSprint = 2,
   M_CrouchWalk = 3,
   M_CrouchRun = 4,
   M_CrouchSprint = 5,
   M_ProneWalk = 6,
   M_ProneRun = 7,
   M_ProneSprint = 8,
   M_StandScope = 9,
   M_CrouchScope = 10,
   M_ProneScope = 11,
   M_StandAim = 12,
   M_CrouchAim = 13,
   M_ProneAim = 14,
   M_Swim = 15,
   M_UnderwaterSwim = 16,
   M_DBNO = 17,
   M_MAX = 18,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
