#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EHDRCaptureGamut
{
   HCGM_Rec709 = 0,
   HCGM_P3DCI = 1,
   HCGM_Rec2020 = 2,
   HCGM_ACES = 3,
   HCGM_ACEScg = 4,
   HCGM_MAX = 5,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
