#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum ELobbyItemTier
{
   ELobbyItemTier__Basic = 0,
   ELobbyItemTier__Common = 1,
   ELobbyItemTier__Classic = 2,
   ELobbyItemTier__Special = 3,
   ELobbyItemTier__Rare = 4,
   ELobbyItemTier__Elite = 5,
   ELobbyItemTier__Epic = 6,
   ELobbyItemTier__Legendary = 7,
   ELobbyItemTier__Ultimate = 8,
   ELobbyItemTier__Event = 9,
   ELobbyItemTier__ELobbyItemTier_MAX = 10,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
