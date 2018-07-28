#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EGamepadInputResponseTypes
{
   EGamepadInputResponseTypes__Pressed = 1,
   EGamepadInputResponseTypes__Released = 2,
   EGamepadInputResponseTypes__Tap = 4,
   EGamepadInputResponseTypes__Hold = 8,
   EGamepadInputResponseTypes__DoubleTap = 16,
   EGamepadInputResponseTypes__EGamepadInputResponseTypes_MAX = 17,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
