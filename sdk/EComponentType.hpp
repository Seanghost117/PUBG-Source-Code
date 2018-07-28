#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EComponentType
{
   EComponentType__None = 0,
   EComponentType__TranslationX = 1,
   EComponentType__TranslationY = 2,
   EComponentType__TranslationZ = 3,
   EComponentType__RotationX = 4,
   EComponentType__RotationY = 5,
   EComponentType__RotationZ = 6,
   EComponentType__Scale = 7,
   EComponentType__ScaleX = 8,
   EComponentType__ScaleY = 9,
   EComponentType__ScaleZ = 10,
   EComponentType__EComponentType_MAX = 11,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
