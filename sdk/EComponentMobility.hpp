#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EComponentMobility
{
   EComponentMobility__Static = 0,
   EComponentMobility__Stationary = 1,
   EComponentMobility__Movable = 2,
   EComponentMobility__EComponentMobility_MAX = 3,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
