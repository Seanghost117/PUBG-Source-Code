#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EArithmeticKeyOperation
{
   EArithmeticKeyOperation__Equal = 0,
   EArithmeticKeyOperation__NotEqual = 1,
   EArithmeticKeyOperation__Less = 2,
   EArithmeticKeyOperation__LessOrEqual = 3,
   EArithmeticKeyOperation__Greater = 4,
   EArithmeticKeyOperation__GreaterOrEqual = 5,
   EArithmeticKeyOperation__EArithmeticKeyOperation_MAX = 6,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
