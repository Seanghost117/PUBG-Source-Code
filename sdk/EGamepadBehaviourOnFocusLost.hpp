#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EGamepadBehaviourOnFocusLost
{
   ResetState = 0,
   UseCurrentState = 1,
   UseStateBeforeReset = 2,
   EGamepadBehaviourOnFocusLost_MAX = 3,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
