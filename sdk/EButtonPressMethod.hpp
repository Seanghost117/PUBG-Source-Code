#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EButtonPressMethod
{
   EButtonPressMethod__DownAndUp = 0,
   EButtonPressMethod__ButtonPress = 1,
   EButtonPressMethod__ButtonRelease = 2,
   EButtonPressMethod__EButtonPressMethod_MAX = 3,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
