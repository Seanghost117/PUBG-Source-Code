#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EMarkStates
{
   EMarkStates__Normal = 0,
   EMarkStates__Groggy = 1,
   EMarkStates__Dead = 2,
   EMarkStates__Vehicle = 3,
   EMarkStates__Parachute = 4,
   EMarkStates__Quitter = 5,
   EMarkStates__EMarkStates_MAX = 6,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
