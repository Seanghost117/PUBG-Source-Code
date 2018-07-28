#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EAnimStance
{
   EAnimStance__Stand = 0,
   EAnimStance__Crouch = 1,
   EAnimStance__Prone = 2,
   EAnimStance__Groggy = 3,
   EAnimStance__EAnimStance_MAX = 4,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
