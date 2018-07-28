#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EPartyReservationResult
{
   EPartyReservationResult__NoResult = 0,
   EPartyReservationResult__RequestPending = 1,
   EPartyReservationResult__GeneralError = 2,
   EPartyReservationResult__PartyLimitReached = 3,
   EPartyReservationResult__IncorrectPlayerCount = 4,
   EPartyReservationResult__RequestTimedOut = 5,
   EPartyReservationResult__ReservationDuplicate = 6,
   EPartyReservationResult__ReservationNotFound = 7,
   EPartyReservationResult__ReservationAccepted = 8,
   EPartyReservationResult__ReservationDenied = 9,
   EPartyReservationResult__ReservationDenied_Banned = 10,
   EPartyReservationResult__ReservationRequestCanceled = 11,
   EPartyReservationResult__ReservationInvalid = 12,
   EPartyReservationResult__BadSessionId = 13,
   EPartyReservationResult__EPartyReservationResult_MAX = 14,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
