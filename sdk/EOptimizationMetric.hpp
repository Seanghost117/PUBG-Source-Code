#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EOptimizationMetric
{
   EOptimizationMetric__TrianglePercentage = 0,
   EOptimizationMetric__OnScreenSize = 1,
   EOptimizationMetric__MaxDeviation = 2,
   EOptimizationMetric__EOptimizationMetric_MAX = 3,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
