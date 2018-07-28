#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EInterpMoveAxis
{
   AXIS_TranslationX = 0,
   AXIS_TranslationY = 1,
   AXIS_TranslationZ = 2,
   AXIS_RotationX = 3,
   AXIS_RotationY = 4,
   AXIS_RotationZ = 5,
   AXIS_MAX = 6,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
