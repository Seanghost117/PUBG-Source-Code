#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EGameplayTagSourceType
{
   EGameplayTagSourceType__Native = 0,
   EGameplayTagSourceType__DefaultTagList = 1,
   EGameplayTagSourceType__TagList = 2,
   EGameplayTagSourceType__DataTable = 3,
   EGameplayTagSourceType__Invalid = 4,
   EGameplayTagSourceType__EGameplayTagSourceType_MAX = 5,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
