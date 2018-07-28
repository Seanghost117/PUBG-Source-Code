#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum ENetworkLagState
{
   ENetworkLagState__NotLagging = 0,
   ENetworkLagState__Lagging = 1,
   ENetworkLagState__ENetworkLagState_MAX = 2,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
