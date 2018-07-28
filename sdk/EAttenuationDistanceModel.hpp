#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EAttenuationDistanceModel
{
   EAttenuationDistanceModel__Linear = 0,
   EAttenuationDistanceModel__Logarithmic = 1,
   EAttenuationDistanceModel__Inverse = 2,
   EAttenuationDistanceModel__LogReverse = 3,
   EAttenuationDistanceModel__NaturalSound = 4,
   EAttenuationDistanceModel__Custom = 5,
   EAttenuationDistanceModel__EAttenuationDistanceModel_MAX = 6,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
