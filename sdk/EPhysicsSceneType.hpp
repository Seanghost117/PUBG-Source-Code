#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EPhysicsSceneType
{
   PST_Sync = 0,
   PST_Cloth = 1,
   PST_Async = 2,
   PST_MAX = 3,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
