#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EDamageZoneType
{
   EDamageZoneType__Head = 0,
   EDamageZoneType__Torso = 1,
   EDamageZoneType__Arm = 2,
   EDamageZoneType__Pelvis = 3,
   EDamageZoneType__Leg = 4,
   EDamageZoneType__EDamageZoneType_MAX = 5,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
