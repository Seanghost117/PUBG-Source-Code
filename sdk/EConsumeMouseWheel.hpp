#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EConsumeMouseWheel
{
   EConsumeMouseWheel__WhenScrollingPossible = 0,
   EConsumeMouseWheel__Always = 1,
   EConsumeMouseWheel__Never = 2,
   EConsumeMouseWheel__EConsumeMouseWheel_MAX = 3,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
