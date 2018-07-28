#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EAngularConstraintMotion
{
   ACM_Free = 0,
   ACM_Limited = 1,
   ACM_Locked = 2,
   ACM_MAX = 3,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
