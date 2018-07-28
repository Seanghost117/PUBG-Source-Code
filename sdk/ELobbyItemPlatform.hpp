#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum ELobbyItemPlatform
{
   ELobbyItemPlatform__PC_Steam = 0,
   ELobbyItemPlatform__PC_NonSteam = 1,
   ELobbyItemPlatform__Xbox = 2,
   ELobbyItemPlatform__ELobbyItemPlatform_MAX = 3,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
