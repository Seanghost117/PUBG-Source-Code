#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum ERBFDistanceMethod
{
   ERBFDistanceMethod__Euclidean = 0,
   ERBFDistanceMethod__Quaternion = 1,
   ERBFDistanceMethod__SwingAngle = 2,
   ERBFDistanceMethod__ERBFDistanceMethod_MAX = 3,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
