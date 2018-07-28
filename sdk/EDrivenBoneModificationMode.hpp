#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EDrivenBoneModificationMode
{
   EDrivenBoneModificationMode__AddToInput = 0,
   EDrivenBoneModificationMode__ReplaceComponent = 1,
   EDrivenBoneModificationMode__AddToRefPose = 2,
   EDrivenBoneModificationMode__EDrivenBoneModificationMode_MAX = 3,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
