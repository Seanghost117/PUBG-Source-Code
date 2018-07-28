#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EAdditiveBasePoseType
{
   ABPT_None = 0,
   ABPT_RefPose = 1,
   ABPT_AnimScaled = 2,
   ABPT_AnimFrame = 3,
   ABPT_MAX = 4,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
