#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EEnvQueryTestClamping
{
   EEnvQueryTestClamping__None = 0,
   EEnvQueryTestClamping__SpecifiedValue = 1,
   EEnvQueryTestClamping__FilterThreshold = 2,
   EEnvQueryTestClamping__EEnvQueryTestClamping_MAX = 3,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
