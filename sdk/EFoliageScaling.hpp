#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EFoliageScaling
{
   EFoliageScaling__Uniform = 0,
   EFoliageScaling__Free = 1,
   EFoliageScaling__LockXY = 2,
   EFoliageScaling__LockXZ = 3,
   EFoliageScaling__LockYZ = 4,
   EFoliageScaling__EFoliageScaling_MAX = 5,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
