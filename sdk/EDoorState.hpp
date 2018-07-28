#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EDoorState
{
   EDoorState__Closed = 0,
   EDoorState__Closing = 1,
   EDoorState__Opened = 2,
   EDoorState__Opening = 3,
   EDoorState__EDoorState_MAX = 4,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
