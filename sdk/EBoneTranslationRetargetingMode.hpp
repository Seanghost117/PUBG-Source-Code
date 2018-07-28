#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EBoneTranslationRetargetingMode
{
   EBoneTranslationRetargetingMode__Animation = 0,
   EBoneTranslationRetargetingMode__Skeleton = 1,
   EBoneTranslationRetargetingMode__AnimationScaled = 2,
   EBoneTranslationRetargetingMode__AnimationRelative = 3,
   EBoneTranslationRetargetingMode__EBoneTranslationRetargetingMode_MAX = 4,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
