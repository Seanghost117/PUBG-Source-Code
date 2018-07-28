#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EOverlapFilterOption
{
   OverlapFilter_All = 0,
   OverlapFilter_DynamicOnly = 1,
   OverlapFilter_StaticOnly = 2,
   OverlapFilter_MAX = 3,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
