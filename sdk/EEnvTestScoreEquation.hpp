#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EEnvTestScoreEquation
{
   EEnvTestScoreEquation__Linear = 0,
   EEnvTestScoreEquation__Square = 1,
   EEnvTestScoreEquation__InverseLinear = 2,
   EEnvTestScoreEquation__SquareRoot = 3,
   EEnvTestScoreEquation__Constant = 4,
   EEnvTestScoreEquation__EEnvTestScoreEquation_MAX = 5,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
