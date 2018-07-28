#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EBlendMode
{
   BLEND_Opaque = 0,
   BLEND_Masked = 1,
   BLEND_Translucent = 2,
   BLEND_Additive = 3,
   BLEND_Modulate = 4,
   BLEND_AlphaComposite = 5,
   BLEND_MAX = 6,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
