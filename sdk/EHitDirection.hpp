#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EHitDirection
{
   EHitDirection__Hit_Front = 0,
   EHitDirection__Hit_Back = 1,
   EHitDirection__Hit_Left = 2,
   EHitDirection__Hit_Right = 3,
   EHitDirection__Hit_MAX = 4,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
