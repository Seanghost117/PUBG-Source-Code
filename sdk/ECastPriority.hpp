#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum ECastPriority
{
   ECastPriority__None = 0,
   ECastPriority__Low = 1,
   ECastPriority__Normal = 2,
   ECastPriority__High = 3,
   ECastPriority__Max = 4,
   ECastPriority__ECastPriority_MAX = 5,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
