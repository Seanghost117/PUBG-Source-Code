#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EEnvQueryTrace
{
   EEnvQueryTrace__None = 0,
   EEnvQueryTrace__Navigation = 1,
   EEnvQueryTrace__Geometry = 2,
   EEnvQueryTrace__NavigationOverLedges = 3,
   EEnvQueryTrace__EEnvQueryTrace_MAX = 4,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
