#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EMeshFeatureImportance
{
   EMeshFeatureImportance__Off = 0,
   EMeshFeatureImportance__Lowest = 1,
   EMeshFeatureImportance__Low = 2,
   EMeshFeatureImportance__Normal = 3,
   EMeshFeatureImportance__High = 4,
   EMeshFeatureImportance__Highest = 5,
   EMeshFeatureImportance__EMeshFeatureImportance_MAX = 6,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
