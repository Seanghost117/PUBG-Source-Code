#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EDamageReason
{
   EDamageReason__None = 0,
   EDamageReason__HeadShot = 1,
   EDamageReason__TorsoShot = 2,
   EDamageReason__PelvisShot = 3,
   EDamageReason__ArmShot = 4,
   EDamageReason__LegShot = 5,
   EDamageReason__NonSpecific = 6,
   EDamageReason__EDamageReason_MAX = 7,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
