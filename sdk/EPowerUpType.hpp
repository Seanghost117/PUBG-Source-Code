#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EPowerUpType
{
   PowerUp_None = 0,
   Powerup_Bandage = 1,
   PowerUp_FirstAid = 2,
   Powerup_Medkit = 3,
   PowerUp_EnergyDrink = 4,
   Powerup_Painkillers = 5,
   PowerUp_Adrenaline = 6,
   PowerUp_MAX = 7,
   EPowerUpType_MAX = 8,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
