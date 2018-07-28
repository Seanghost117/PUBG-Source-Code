#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EHasCustomNavigableGeometry
{
   EHasCustomNavigableGeometry__No = 0,
   EHasCustomNavigableGeometry__Yes = 1,
   EHasCustomNavigableGeometry__EvenIfNotCollidable = 2,
   EHasCustomNavigableGeometry__DontExport = 3,
   EHasCustomNavigableGeometry__EHasCustomNavigableGeometry_MAX = 4,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
