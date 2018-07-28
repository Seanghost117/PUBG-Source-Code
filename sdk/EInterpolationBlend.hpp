#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EInterpolationBlend
{
   EInterpolationBlend__Linear = 0,
   EInterpolationBlend__Cubic = 1,
   EInterpolationBlend__Sinusoidal = 2,
   EInterpolationBlend__EaseInOutExponent2 = 3,
   EInterpolationBlend__EaseInOutExponent3 = 4,
   EInterpolationBlend__EaseInOutExponent4 = 5,
   EInterpolationBlend__EaseInOutExponent5 = 6,
   EInterpolationBlend__MAX = 7,
   EInterpolationBlend__EInterpolationBlend_MAX = 8,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
