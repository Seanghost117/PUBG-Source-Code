#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EKinematicBonesUpdateToPhysics
{
   EKinematicBonesUpdateToPhysics__SkipSimulatingBones = 0,
   EKinematicBonesUpdateToPhysics__SkipAllBones = 1,
   EKinematicBonesUpdateToPhysics__EKinematicBonesUpdateToPhysics_MAX = 2,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
