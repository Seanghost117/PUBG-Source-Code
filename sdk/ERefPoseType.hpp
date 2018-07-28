#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum ERefPoseType
{
   EIT_LocalSpace = 0,
   EIT_Additive = 1,
   EIT_MAX = 2,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
