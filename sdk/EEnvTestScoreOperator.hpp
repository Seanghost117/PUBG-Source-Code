#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EEnvTestScoreOperator
{
   EEnvTestScoreOperator__AverageScore = 0,
   EEnvTestScoreOperator__MinScore = 1,
   EEnvTestScoreOperator__MaxScore = 2,
   EEnvTestScoreOperator__EEnvTestScoreOperator_MAX = 3,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
