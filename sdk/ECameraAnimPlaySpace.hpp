#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum ECameraAnimPlaySpace
{
   ECameraAnimPlaySpace__CameraLocal = 0,
   ECameraAnimPlaySpace__World = 1,
   ECameraAnimPlaySpace__UserDefined = 2,
   ECameraAnimPlaySpace__ECameraAnimPlaySpace_MAX = 3,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
