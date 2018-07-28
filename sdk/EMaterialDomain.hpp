#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EMaterialDomain
{
   MD_Surface = 0,
   MD_DeferredDecal = 1,
   MD_LightFunction = 2,
   MD_Volume = 3,
   MD_PostProcess = 4,
   MD_UI = 5,
   MD_MAX = 6,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
