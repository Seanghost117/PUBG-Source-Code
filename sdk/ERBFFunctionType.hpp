#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum ERBFFunctionType
{
   ERBFFunctionType__Gaussian = 0,
   ERBFFunctionType__Exponential = 1,
   ERBFFunctionType__Linear = 2,
   ERBFFunctionType__Cubic = 3,
   ERBFFunctionType__Quintic = 4,
   ERBFFunctionType__ERBFFunctionType_MAX = 5,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
