#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EOrientPositionSelector
{
   EOrientPositionSelector__Orientation = 0,
   EOrientPositionSelector__Position = 1,
   EOrientPositionSelector__OrientationAndPosition = 2,
   EOrientPositionSelector__EOrientPositionSelector_MAX = 3,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
