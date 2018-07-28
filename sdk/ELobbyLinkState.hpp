#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum ELobbyLinkState
{
   ELobbyLinkState__Disconnect = 0,
   ELobbyLinkState__WaitInitialize = 1,
   ELobbyLinkState__WaitStart = 2,
   ELobbyLinkState__Gaming = 3,
   ELobbyLinkState__Finished = 4,
   ELobbyLinkState__ELobbyLinkState_MAX = 5,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
