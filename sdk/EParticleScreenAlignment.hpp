#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EParticleScreenAlignment
{
   PSA_FacingCameraPosition = 0,
   PSA_Square = 1,
   PSA_Rectangle = 2,
   PSA_Velocity = 3,
   PSA_AwayFromCenter = 4,
   PSA_TypeSpecific = 5,
   PSA_FacingCameraDistanceBlend = 6,
   PSA_MAX = 7,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
