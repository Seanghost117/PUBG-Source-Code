#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EBoneVisibilityStatus
{
   BVS_HiddenByParent = 0,
   BVS_Visible = 1,
   BVS_ExplicitlyHidden = 2,
   BVS_MAX = 3,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
