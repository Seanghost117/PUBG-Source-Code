#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EEnvTraceShape
{
   EEnvTraceShape__Line = 0,
   EEnvTraceShape__Box = 1,
   EEnvTraceShape__Sphere = 2,
   EEnvTraceShape__Capsule = 3,
   EEnvTraceShape__EEnvTraceShape_MAX = 4,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
