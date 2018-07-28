#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EPhysicsType
{
   PhysType_Default = 0,
   PhysType_Kinematic = 1,
   PhysType_Simulated = 2,
   PhysType_MAX = 3,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
