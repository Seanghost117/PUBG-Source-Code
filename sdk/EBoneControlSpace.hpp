#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EBoneControlSpace
{
   BCS_WorldSpace = 0,
   BCS_ComponentSpace = 1,
   BCS_ParentBoneSpace = 2,
   BCS_BoneSpace = 3,
   BCS_MAX = 4,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
