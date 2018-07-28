#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EParticleSysParamType
{
   PSPT_None = 0,
   PSPT_Scalar = 1,
   PSPT_ScalarRand = 2,
   PSPT_Vector = 3,
   PSPT_VectorRand = 4,
   PSPT_Color = 5,
   PSPT_Actor = 6,
   PSPT_Material = 7,
   PSPT_MAX = 8,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
