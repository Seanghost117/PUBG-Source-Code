#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EMediaPlayerTrack
{
   EMediaPlayerTrack__Audio = 0,
   EMediaPlayerTrack__Binary = 1,
   EMediaPlayerTrack__Caption = 2,
   EMediaPlayerTrack__Script = 3,
   EMediaPlayerTrack__Subtitle = 4,
   EMediaPlayerTrack__Text = 5,
   EMediaPlayerTrack__Video = 6,
   EMediaPlayerTrack__EMediaPlayerTrack_MAX = 7,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
