#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EGTInputWidgetRaycastQuality
{
   RaycastQuality_Fast = 0,
   RaycastQuality_Balanced = 1,
   RaycastQuality_Accurate = 2,
   RaycastQuality_MAX = 3,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
