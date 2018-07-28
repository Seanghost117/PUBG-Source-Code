#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EAlphaBlendOption
{
   EAlphaBlendOption__Linear = 0,
   EAlphaBlendOption__Cubic = 1,
   EAlphaBlendOption__HermiteCubic = 2,
   EAlphaBlendOption__Sinusoidal = 3,
   EAlphaBlendOption__QuadraticInOut = 4,
   EAlphaBlendOption__CubicInOut = 5,
   EAlphaBlendOption__QuarticInOut = 6,
   EAlphaBlendOption__QuinticInOut = 7,
   EAlphaBlendOption__CircularIn = 8,
   EAlphaBlendOption__CircularOut = 9,
   EAlphaBlendOption__CircularInOut = 10,
   EAlphaBlendOption__ExpIn = 11,
   EAlphaBlendOption__ExpOut = 12,
   EAlphaBlendOption__ExpInOut = 13,
   EAlphaBlendOption__Custom = 14,
   EAlphaBlendOption__EAlphaBlendOption_MAX = 15,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
