#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EParticleSubUVInterpMethod
{
   PSUVIM_None = 0,
   PSUVIM_Linear = 1,
   PSUVIM_Linear_Blend = 2,
   PSUVIM_Random = 3,
   PSUVIM_Random_Blend = 4,
   PSUVIM_MAX = 5,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
