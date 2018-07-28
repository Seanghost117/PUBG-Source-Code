#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EEnvQueryStatus
{
   EEnvQueryStatus__Processing = 0,
   EEnvQueryStatus__Success = 1,
   EEnvQueryStatus__Failed = 2,
   EEnvQueryStatus__Aborted = 3,
   EEnvQueryStatus__OwnerLost = 4,
   EEnvQueryStatus__MissingParam = 5,
   EEnvQueryStatus__EEnvQueryStatus_MAX = 6,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
