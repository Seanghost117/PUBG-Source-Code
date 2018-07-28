#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EBeaconConnectionState
{
   EBeaconConnectionState__Invalid = 0,
   EBeaconConnectionState__Closed = 1,
   EBeaconConnectionState__Pending = 2,
   EBeaconConnectionState__Open = 3,
   EBeaconConnectionState__EBeaconConnectionState_MAX = 4,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
