#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum ELinearConstraintMotion
{
   LCM_Free = 0,
   LCM_Limited = 1,
   LCM_Locked = 2,
   LCM_MAX = 3,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
