#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EAdditiveAnimationType
{
   AAT_None = 0,
   AAT_LocalSpaceBase = 1,
   AAT_RotationOffsetMeshSpace = 2,
   AAT_MAX = 3,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
