#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum AnimPhysCollisionType
{
   AnimPhysCollisionType__CoM = 0,
   AnimPhysCollisionType__CustomSphere = 1,
   AnimPhysCollisionType__InnerSphere = 2,
   AnimPhysCollisionType__OuterSphere = 3,
   AnimPhysCollisionType__AnimPhysCollisionType_MAX = 4,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
