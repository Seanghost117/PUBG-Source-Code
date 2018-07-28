#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum AnimPhysSimSpaceType
{
   AnimPhysSimSpaceType__Component = 0,
   AnimPhysSimSpaceType__Actor = 1,
   AnimPhysSimSpaceType__World = 2,
   AnimPhysSimSpaceType__RootRelative = 3,
   AnimPhysSimSpaceType__BoneRelative = 4,
   AnimPhysSimSpaceType__AnimPhysSimSpaceType_MAX = 5,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
