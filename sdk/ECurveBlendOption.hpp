#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum ECurveBlendOption
{
   ECurveBlendOption__MaxWeight = 0,
   ECurveBlendOption__NormalizeByWeight = 1,
   ECurveBlendOption__BlendByWeight = 2,
   ECurveBlendOption__ECurveBlendOption_MAX = 3,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
