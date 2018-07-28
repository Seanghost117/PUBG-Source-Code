#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum ENiagaraSortMode
{
   ENiagaraSortMode__SortNone = 0,
   ENiagaraSortMode__SortViewDepth = 1,
   ENiagaraSortMode__SortViewDistance = 2,
   ENiagaraSortMode__ENiagaraSortMode_MAX = 3,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
