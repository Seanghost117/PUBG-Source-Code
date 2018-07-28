#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum ECoherentUIGTInputPropagationBehaviour
{
   ECoherentUIGTInputPropagationBehaviour__None = 0,
   ECoherentUIGTInputPropagationBehaviour__Keyboard = 1,
   ECoherentUIGTInputPropagationBehaviour__Joystick = 2,
   ECoherentUIGTInputPropagationBehaviour__KeyboardAndJoystick = 3,
   ECoherentUIGTInputPropagationBehaviour__ECoherentUIGTInputPropagationBehaviour_MAX = 4,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
