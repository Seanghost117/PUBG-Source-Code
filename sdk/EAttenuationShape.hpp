#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EAttenuationShape
{
   EAttenuationShape__Sphere = 0,
   EAttenuationShape__Capsule = 1,
   EAttenuationShape__Box = 2,
   EAttenuationShape__Cone = 3,
   EAttenuationShape__EAttenuationShape_MAX = 4,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
