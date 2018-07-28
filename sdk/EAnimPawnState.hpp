#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EAnimPawnState
{
   EAnimPawnState__PS_OnFoot = 0,
   EAnimPawnState__PS_VehicleDriver = 1,
   EAnimPawnState__PS_VehiclePassenger = 2,
   EAnimPawnState__PS_Freefall = 3,
   EAnimPawnState__PS_Parachute = 4,
   EAnimPawnState__PS_Swim = 5,
   EAnimPawnState__PS_DBNO = 6,
   EAnimPawnState__PS_Reviving = 7,
   EAnimPawnState__PS_Flying = 8,
   EAnimPawnState__PS_ActiveRagdoll = 9,
   EAnimPawnState__PS_MAX = 10,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
