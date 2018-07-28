#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EMaterialVectorCoordTransform
{
   TRANSFORM_Tangent = 0,
   TRANSFORM_Local = 1,
   TRANSFORM_World = 2,
   TRANSFORM_View = 3,
   TRANSFORM_Camera = 4,
   TRANSFORM_ParticleWorld = 5,
   TRANSFORM_MAX = 6,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
