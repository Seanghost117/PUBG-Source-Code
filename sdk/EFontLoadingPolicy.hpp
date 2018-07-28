#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EFontLoadingPolicy
{
   EFontLoadingPolicy__LazyLoad = 0,
   EFontLoadingPolicy__Stream = 1,
   EFontLoadingPolicy__Inline = 2,
   EFontLoadingPolicy__EFontLoadingPolicy_MAX = 3,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
