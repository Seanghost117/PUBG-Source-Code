#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum ENavigationQueryResult
{
   ENavigationQueryResult__Invalid = 0,
   ENavigationQueryResult__Error = 1,
   ENavigationQueryResult__Fail = 2,
   ENavigationQueryResult__Success = 3,
   ENavigationQueryResult__ENavigationQueryResult_MAX = 4,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
