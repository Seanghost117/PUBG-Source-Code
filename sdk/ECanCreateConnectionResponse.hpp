#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum ECanCreateConnectionResponse
{
   CONNECT_RESPONSE_MAKE = 0,
   CONNECT_RESPONSE_DISALLOW = 1,
   CONNECT_RESPONSE_BREAK_OTHERS_A = 2,
   CONNECT_RESPONSE_BREAK_OTHERS_B = 3,
   CONNECT_RESPONSE_BREAK_OTHERS_AB = 4,
   CONNECT_RESPONSE_MAKE_WITH_CONVERSION_NODE = 5,
   CONNECT_RESPONSE_MAX = 6,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
