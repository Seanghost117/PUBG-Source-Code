#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EDrawDebugItemType
{
   EDrawDebugItemType__DirectionalArrow = 0,
   EDrawDebugItemType__Sphere = 1,
   EDrawDebugItemType__Line = 2,
   EDrawDebugItemType__OnScreenMessage = 3,
   EDrawDebugItemType__CoordinateSystem = 4,
   EDrawDebugItemType__EDrawDebugItemType_MAX = 5,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
