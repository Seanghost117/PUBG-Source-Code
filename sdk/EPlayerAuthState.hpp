#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EPlayerAuthState
{
   EPlayerAuthState__None = 0,
   EPlayerAuthState__Login = 1,
   EPlayerAuthState__Logout = 2,
   EPlayerAuthState__EPlayerAuthState_MAX = 3,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
