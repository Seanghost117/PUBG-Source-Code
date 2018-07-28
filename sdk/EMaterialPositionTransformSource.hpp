#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EMaterialPositionTransformSource
{
   TRANSFORMPOSSOURCE_Local = 0,
   TRANSFORMPOSSOURCE_World = 1,
   TRANSFORMPOSSOURCE_TranslatedWorld = 2,
   TRANSFORMPOSSOURCE_View = 3,
   TRANSFORMPOSSOURCE_Camera = 4,
   TRANSFORMPOSSOURCE_Particle = 5,
   TRANSFORMPOSSOURCE_MAX = 6,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
