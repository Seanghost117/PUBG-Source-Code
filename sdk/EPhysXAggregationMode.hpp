#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EPhysXAggregationMode
{
   EPhysXAggregationMode__NoCollision = 0,
   EPhysXAggregationMode__BlockAllWithComplexAsSimple = 1,
   EPhysXAggregationMode__EPhysXAggregationMode_MAX = 2,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
