#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EAspectRatioAxisConstraint
{
   AspectRatio_MaintainYFOV = 0,
   AspectRatio_MaintainXFOV = 1,
   AspectRatio_MajorAxisFOV = 2,
   AspectRatio_MAX = 3,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
