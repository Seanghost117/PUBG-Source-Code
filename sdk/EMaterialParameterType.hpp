#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EMaterialParameterType
{
   EMaterialParameterType__Bool = 0,
   EMaterialParameterType__Scalar = 1,
   EMaterialParameterType__Vector = 2,
   EMaterialParameterType__Texture = 3,
   EMaterialParameterType__Undefined = 4,
   EMaterialParameterType__EMaterialParameterType_MAX = 5,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
