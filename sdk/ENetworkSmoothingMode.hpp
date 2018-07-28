#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum ENetworkSmoothingMode
{
   ENetworkSmoothingMode__Disabled = 0,
   ENetworkSmoothingMode__Linear = 1,
   ENetworkSmoothingMode__Exponential = 2,
   ENetworkSmoothingMode__Replay = 3,
   ENetworkSmoothingMode__ENetworkSmoothingMode_MAX = 4,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
