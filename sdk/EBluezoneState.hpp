#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EBluezoneState
{
   EBluezoneState__None = 0,
   EBluezoneState__Wait = 1,
   EBluezoneState__Release = 2,
   EBluezoneState__EBluezoneState_MAX = 3,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
