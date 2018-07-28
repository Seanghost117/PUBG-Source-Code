#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum ENetRole
{
   ROLE_None = 0,
   ROLE_SimulatedProxy = 1,
   ROLE_AutonomousProxy = 2,
   ROLE_Authority = 3,
   ROLE_MAX = 4,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
