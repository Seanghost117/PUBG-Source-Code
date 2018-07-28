#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum ERecastPartitioning
{
   ERecastPartitioning__Monotone = 0,
   ERecastPartitioning__Watershed = 1,
   ERecastPartitioning__ChunkyMonotone = 2,
   ERecastPartitioning__ERecastPartitioning_MAX = 3,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
