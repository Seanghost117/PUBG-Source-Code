#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EEnvTestPurpose
{
   EEnvTestPurpose__Filter = 0,
   EEnvTestPurpose__Score = 1,
   EEnvTestPurpose__FilterAndScore = 2,
   EEnvTestPurpose__EEnvTestPurpose_MAX = 3,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
