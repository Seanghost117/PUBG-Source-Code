#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum ECameraViewBehaviour
{
   ECameraViewBehaviour__FpsAndTps = 0,
   ECameraViewBehaviour__FpsOnly = 1,
   ECameraViewBehaviour__TpsOnly = 2,
   ECameraViewBehaviour__ECameraViewBehaviour_MAX = 3,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
