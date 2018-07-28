#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EAnimCurveType
{
   EAnimCurveType__AttributeCurve = 0,
   EAnimCurveType__MaterialCurve = 1,
   EAnimCurveType__MorphTargetCurve = 2,
   EAnimCurveType__MaxAnimCurveType = 3,
   EAnimCurveType__EAnimCurveType_MAX = 4,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
