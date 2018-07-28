#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum ENetworkFailure
{
   ENetworkFailure__NetDriverAlreadyExists = 0,
   ENetworkFailure__NetDriverCreateFailure = 1,
   ENetworkFailure__NetDriverListenFailure = 2,
   ENetworkFailure__ConnectionLost = 3,
   ENetworkFailure__ConnectionTimeout = 4,
   ENetworkFailure__FailureReceived = 5,
   ENetworkFailure__OutdatedClient = 6,
   ENetworkFailure__OutdatedServer = 7,
   ENetworkFailure__PendingConnectionFailure = 8,
   ENetworkFailure__NetGuidMismatch = 9,
   ENetworkFailure__NetChecksumMismatch = 10,
   ENetworkFailure__ENetworkFailure_MAX = 11,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
