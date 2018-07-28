#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EBoneRotationSource
{
   BRS_KeepComponentSpaceRotation = 0,
   BRS_KeepLocalSpaceRotation = 1,
   BRS_CopyFromTarget = 2,
   BRS_MAX = 3,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
