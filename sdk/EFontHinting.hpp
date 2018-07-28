#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EFontHinting
{
   EFontHinting__Default = 0,
   EFontHinting__Auto = 1,
   EFontHinting__AutoLight = 2,
   EFontHinting__Monochrome = 3,
   EFontHinting__None = 4,
   EFontHinting__EFontHinting_MAX = 5,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
