#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EMeshComponentUpdateFlag
{
   EMeshComponentUpdateFlag__AlwaysTickPoseAndRefreshBones = 0,
   EMeshComponentUpdateFlag__AlwaysTickPose = 1,
   EMeshComponentUpdateFlag__OnlyTickPoseWhenRendered = 2,
   EMeshComponentUpdateFlag__EMeshComponentUpdateFlag_MAX = 3,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
