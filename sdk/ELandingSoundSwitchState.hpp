#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum ELandingSoundSwitchState
{
   ELandingSoundSwitchState__None = 0,
   ELandingSoundSwitchState__Light = 1,
   ELandingSoundSwitchState__Heavy = 2,
   ELandingSoundSwitchState__VeryHeavy = 3,
   ELandingSoundSwitchState__ELandingSoundSwitchState_MAX = 4,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
