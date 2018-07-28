#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EMutableParameterType
{
   EMutableParameterType__None = 0,
   EMutableParameterType__Bool = 1,
   EMutableParameterType__Int = 2,
   EMutableParameterType__Float = 3,
   EMutableParameterType__Color = 4,
   EMutableParameterType__Projector = 5,
   EMutableParameterType__Texture = 6,
   EMutableParameterType__EMutableParameterType_MAX = 7,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
