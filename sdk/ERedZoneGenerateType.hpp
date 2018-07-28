#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum ERedZoneGenerateType
{
   ERedZoneGenerateType__None = 0,
   ERedZoneGenerateType__Uniform_Distribution = 1,
   ERedZoneGenerateType__Ringtaw = 2,
   ERedZoneGenerateType__Outsider = 3,
   ERedZoneGenerateType__RingtawOrOutsider = 4,
   ERedZoneGenerateType__ERedZoneGenerateType_MAX = 5,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
