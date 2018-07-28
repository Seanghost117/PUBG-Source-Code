#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EAudioOutputTarget
{
   EAudioOutputTarget__Speaker = 0,
   EAudioOutputTarget__Controller = 1,
   EAudioOutputTarget__ControllerFallbackToSpeaker = 2,
   EAudioOutputTarget__EAudioOutputTarget_MAX = 3,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
