#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EInputModeSettingActions
{
   EInputModeSettingActions__Crouch = 0,
   EInputModeSettingActions__Prone = 1,
   EInputModeSettingActions__Walk = 2,
   EInputModeSettingActions__Sprint = 3,
   EInputModeSettingActions__HoldRotation = 4,
   EInputModeSettingActions__HoldBreath = 5,
   EInputModeSettingActions__Peek = 6,
   EInputModeSettingActions__Map = 7,
   EInputModeSettingActions__ADS = 8,
   EInputModeSettingActions__Aim = 9,
   EInputModeSettingActions__EInputModeSettingActions_MAX = 10,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
