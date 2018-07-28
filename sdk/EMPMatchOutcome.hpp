#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EMPMatchOutcome
{
   EMPMatchOutcome__None = 0,
   EMPMatchOutcome__Quit = 1,
   EMPMatchOutcome__Won = 2,
   EMPMatchOutcome__Lost = 3,
   EMPMatchOutcome__Tied = 4,
   EMPMatchOutcome__TimeExpired = 5,
   EMPMatchOutcome__First = 6,
   EMPMatchOutcome__Second = 7,
   EMPMatchOutcome__Third = 8,
   EMPMatchOutcome__Fourth = 9,
   EMPMatchOutcome__EMPMatchOutcome_MAX = 10,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
