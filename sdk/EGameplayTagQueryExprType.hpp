#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EGameplayTagQueryExprType
{
   EGameplayTagQueryExprType__Undefined = 0,
   EGameplayTagQueryExprType__AnyTagsMatch = 1,
   EGameplayTagQueryExprType__AllTagsMatch = 2,
   EGameplayTagQueryExprType__NoTagsMatch = 3,
   EGameplayTagQueryExprType__AnyExprMatch = 4,
   EGameplayTagQueryExprType__AllExprMatch = 5,
   EGameplayTagQueryExprType__NoExprMatch = 6,
   EGameplayTagQueryExprType__EGameplayTagQueryExprType_MAX = 7,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
