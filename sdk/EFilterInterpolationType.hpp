#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EFilterInterpolationType
{
   BSIT_Average = 0,
   BSIT_Linear = 1,
   BSIT_Cubic = 2,
   BSIT_MAX = 3,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
