#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EAttachLocation
{
   EAttachLocation__KeepRelativeOffset = 0,
   EAttachLocation__KeepWorldPosition = 1,
   EAttachLocation__SnapToTarget = 2,
   EAttachLocation__SnapToTargetIncludingScale = 3,
   EAttachLocation__EAttachLocation_MAX = 4,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
