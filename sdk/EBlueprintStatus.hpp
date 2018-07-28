#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EBlueprintStatus
{
   BS_Unknown = 0,
   BS_Dirty = 1,
   BS_Error = 2,
   BS_UpToDate = 3,
   BS_BeingCreated = 4,
   BS_UpToDateWithWarnings = 5,
   BS_MAX = 6,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
