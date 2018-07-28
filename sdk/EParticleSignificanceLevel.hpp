#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EParticleSignificanceLevel
{
   EParticleSignificanceLevel__Low = 0,
   EParticleSignificanceLevel__Medium = 1,
   EParticleSignificanceLevel__High = 2,
   EParticleSignificanceLevel__Critical = 3,
   EParticleSignificanceLevel__Num = 4,
   EParticleSignificanceLevel__EParticleSignificanceLevel_MAX = 5,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
