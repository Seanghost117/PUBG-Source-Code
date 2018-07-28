#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EEasingFunc
{
   EEasingFunc__Linear = 0,
   EEasingFunc__Step = 1,
   EEasingFunc__SinusoidalIn = 2,
   EEasingFunc__SinusoidalOut = 3,
   EEasingFunc__SinusoidalInOut = 4,
   EEasingFunc__EaseIn = 5,
   EEasingFunc__EaseOut = 6,
   EEasingFunc__EaseInOut = 7,
   EEasingFunc__ExpoIn = 8,
   EEasingFunc__ExpoOut = 9,
   EEasingFunc__ExpoInOut = 10,
   EEasingFunc__CircularIn = 11,
   EEasingFunc__CircularOut = 12,
   EEasingFunc__CircularInOut = 13,
   EEasingFunc__EEasingFunc_MAX = 14,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
