#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EInterpTrackMoveRotMode
{
   IMR_Keyframed = 0,
   IMR_LookAtGroup = 1,
   IMR_Ignore = 2,
   IMR_MAX = 3,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
