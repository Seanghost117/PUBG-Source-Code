#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EDepthOfFieldMethod
{
   DOFM_BokehDOF = 0,
   DOFM_Gaussian = 1,
   DOFM_CircleDOF = 2,
   DOFM_MAX = 3,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
