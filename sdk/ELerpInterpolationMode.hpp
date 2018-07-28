#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum ELerpInterpolationMode
{
   ELerpInterpolationMode__QuatInterp = 0,
   ELerpInterpolationMode__EulerInterp = 1,
   ELerpInterpolationMode__DualQuatInterp = 2,
   ELerpInterpolationMode__ELerpInterpolationMode_MAX = 3,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
