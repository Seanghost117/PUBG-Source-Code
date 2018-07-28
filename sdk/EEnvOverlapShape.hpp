#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EEnvOverlapShape
{
   EEnvOverlapShape__Box = 0,
   EEnvOverlapShape__Sphere = 1,
   EEnvOverlapShape__Capsule = 2,
   EEnvOverlapShape__EEnvOverlapShape_MAX = 3,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
