#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EEnvTestDistance
{
   EEnvTestDistance__Distance3D = 0,
   EEnvTestDistance__Distance2D = 1,
   EEnvTestDistance__DistanceZ = 2,
   EEnvTestDistance__DistanceAbsoluteZ = 3,
   EEnvTestDistance__EEnvTestDistance_MAX = 4,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
