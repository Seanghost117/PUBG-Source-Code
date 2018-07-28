#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum ENoiseFunction
{
   NOISEFUNCTION_SimplexTex = 0,
   NOISEFUNCTION_GradientTex = 1,
   NOISEFUNCTION_GradientTex3D = 2,
   NOISEFUNCTION_GradientALU = 3,
   NOISEFUNCTION_ValueALU = 4,
   NOISEFUNCTION_VoronoiALU = 5,
   NOISEFUNCTION_MAX = 6,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
