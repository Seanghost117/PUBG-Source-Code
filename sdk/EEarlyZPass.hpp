#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EEarlyZPass
{
   EEarlyZPass__None = 0,
   EEarlyZPass__OpaqueOnly = 1,
   EEarlyZPass__OpaqueAndMasked = 2,
   EEarlyZPass__Auto = 3,
   EEarlyZPass__EEarlyZPass_MAX = 4,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
