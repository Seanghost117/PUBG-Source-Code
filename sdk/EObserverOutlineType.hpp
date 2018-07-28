#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EObserverOutlineType
{
   SpectatedCharacter = 1,
   SpectatedCharacterTeam = 2,
   SpectatedCharacterEnemy = 3,
   WithoutSpectatedCharacter = 4,
   WithoutSpectatedTeamCharacter = 5,
   EObserverOutlineType_MAX = 6,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
