#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum ECheatType
{
   SpeedHack = 0,
   SpeedHack_UE = 1,
   IgnoreWall_Hit = 2,
   IgnoreWall_Sight = 3,
   ItemPackage = 4,
   CarePackageMount = 5,
   HitLag = 6,
   Aimbot = 7,
   InvalidImpact = 8,
   InvalidImpactZ = 9,
   InvalidImpact_Gun_C = 10,
   InvalidOrigin_Gun = 11,
   InvalidOrigin_Melee = 12,
   InvalidOrigin_Punch = 13,
   InvalidOrigin_Throwable = 14,
   InvalidRange = 15,
   InvalidRange2 = 16,
   InvalidSequence = 17,
   InvalidAmmo = 18,
   InvalidReviving = 19,
   InvalidKick = 20,
   InvalidA0 = 21,
   InvalidB0 = 22,
   InvalidB1 = 23,
   InvalidOrigin_Gun_C = 24,
   CHKSUM_GUN = 25,
   CHKSUM_PUNCH = 26,
   CHKSUM_MELEE = 27,
   CHKSUM_VEHICLE = 28,
   CHKSUM_A0 = 29,
   CHKSUM_T0 = 30,
   CHKSUM_S0 = 31,
   CHKSUM_D0 = 32,
   CHKSUM_V0 = 33,
   CHKSUM_W0 = 34,
   CHKSUM_T1 = 35,
   CHKSUM_CD = 36,
   CHKSUM_LC = 37,
   CHKSUM_V1 = 38,
   CHKSUM_P0 = 39,
   VHC_RI = 40,
   VHC_SC = 41,
   ESP1 = 42,
   ESP2 = 43,
   ESP3 = 44,
   SimilarHit = 45,
   DoubleKill = 46,
   B0Log = 47,
   ECheatType_MAX = 48,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
