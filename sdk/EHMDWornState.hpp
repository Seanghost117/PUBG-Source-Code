#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EHMDWornState
{
   EHMDWornState__Unknown = 0,
   EHMDWornState__Worn = 1,
   EHMDWornState__NotWorn = 2,
   EHMDWornState__EHMDWornState_MAX = 3,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
