#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EDynamicActorScene
{
   EDynamicActorScene__Default = 0,
   EDynamicActorScene__UseSyncScene = 1,
   EDynamicActorScene__UseAsyncScene = 2,
   EDynamicActorScene__EDynamicActorScene_MAX = 3,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
