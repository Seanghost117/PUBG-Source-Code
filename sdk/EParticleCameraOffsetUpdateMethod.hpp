#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EParticleCameraOffsetUpdateMethod
{
   EPCOUM_DirectSet = 0,
   EPCOUM_Additive = 1,
   EPCOUM_Scalar = 2,
   EPCOUM_MAX = 3,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
