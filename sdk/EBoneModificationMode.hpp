#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EBoneModificationMode
{
   BMM_Ignore = 0,
   BMM_Replace = 1,
   BMM_Additive = 2,
   BMM_MAX = 3,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
