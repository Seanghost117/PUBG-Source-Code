#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EClientRequestType
{
   EClientRequestType__NonePending = 0,
   EClientRequestType__ExistingSessionReservation = 1,
   EClientRequestType__ReservationUpdate = 2,
   EClientRequestType__EmptyServerReservation = 3,
   EClientRequestType__Reconnect = 4,
   EClientRequestType__Abandon = 5,
   EClientRequestType__EClientRequestType_MAX = 6,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
