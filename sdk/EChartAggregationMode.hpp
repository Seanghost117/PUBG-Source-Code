#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EChartAggregationMode
{
   EChartAggregationMode__TextureSize = 0,
   EChartAggregationMode__SurfaceArea = 1,
   EChartAggregationMode__PixelDensity = 2,
   EChartAggregationMode__UVSize = 4,
   EChartAggregationMode__EChartAggregationMode_MAX = 5,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
