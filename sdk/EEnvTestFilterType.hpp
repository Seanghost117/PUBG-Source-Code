#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EEnvTestFilterType
{
   EEnvTestFilterType__Minimum = 0,
   EEnvTestFilterType__Maximum = 1,
   EEnvTestFilterType__Range = 2,
   EEnvTestFilterType__Match = 3,
   EEnvTestFilterType__EEnvTestFilterType_MAX = 4,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
