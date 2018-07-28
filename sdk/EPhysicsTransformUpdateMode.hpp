#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EPhysicsTransformUpdateMode
{
   EPhysicsTransformUpdateMode__SimulationUpatesComponentTransform = 0,
   EPhysicsTransformUpdateMode__ComponentTransformIsKinematic = 1,
   EPhysicsTransformUpdateMode__EPhysicsTransformUpdateMode_MAX = 2,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
