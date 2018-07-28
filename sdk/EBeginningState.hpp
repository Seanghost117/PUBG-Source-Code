#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EBeginningState
{
   EBeginningState__Invalid = 0,
   EBeginningState__Normal = 1,
   EBeginningState__StartIsland = 2,
   EBeginningState__Airplane = 3,
   EBeginningState__Skydiving = 4,
   EBeginningState__Parachuting = 5,
   EBeginningState__EBeginningState_MAX = 6,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
