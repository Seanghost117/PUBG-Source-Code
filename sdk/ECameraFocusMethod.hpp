#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum ECameraFocusMethod
{
   ECameraFocusMethod__None = 0,
   ECameraFocusMethod__Manual = 1,
   ECameraFocusMethod__Tracking = 2,
   ECameraFocusMethod__ECameraFocusMethod_MAX = 3,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
