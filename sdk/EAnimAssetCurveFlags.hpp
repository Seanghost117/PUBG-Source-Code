#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EAnimAssetCurveFlags
{
   AACF_DriveMorphTarget_DEPRECATED = 1,
   AACF_DriveAttribute_DEPRECATED = 2,
   AACF_Editable = 4,
   AACF_DriveMaterial_DEPRECATED = 8,
   AACF_Metadata = 16,
   AACF_DriveTrack = 32,
   AACF_Disabled = 64,
   AACF_MAX = 65,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
