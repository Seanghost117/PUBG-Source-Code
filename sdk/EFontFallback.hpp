#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EFontFallback
{
   EFontFallback__FF_NoFallback = 0,
   EFontFallback__FF_LocalizedFallback = 1,
   EFontFallback__FF_LastResortFallback = 2,
   EFontFallback__FF_Max = 3,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
