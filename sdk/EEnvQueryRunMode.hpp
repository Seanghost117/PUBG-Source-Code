#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EEnvQueryRunMode
{
   EEnvQueryRunMode__SingleResult = 0,
   EEnvQueryRunMode__RandomBest5Pct = 1,
   EEnvQueryRunMode__RandomBest25Pct = 2,
   EEnvQueryRunMode__AllMatching = 3,
   EEnvQueryRunMode__EEnvQueryRunMode_MAX = 4,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
