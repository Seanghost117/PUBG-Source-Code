#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum ECollisionEnabled
{
   ECollisionEnabled__NoCollision = 0,
   ECollisionEnabled__QueryOnly = 1,
   ECollisionEnabled__PhysicsOnly = 2,
   ECollisionEnabled__QueryAndPhysics = 3,
   ECollisionEnabled__ECollisionEnabled_MAX = 4,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
