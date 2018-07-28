#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum ENoReloadGuideType
{
   ENoReloadGuideType__Alwyas = 0,
   ENoReloadGuideType__WhenCurrentWeapon = 1,
   ENoReloadGuideType__ENoReloadGuideType_MAX = 2,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
