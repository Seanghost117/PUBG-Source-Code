#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EProcMeshSliceCapOption
{
   EProcMeshSliceCapOption__NoCap = 0,
   EProcMeshSliceCapOption__CreateNewSectionForCap = 1,
   EProcMeshSliceCapOption__UseLastSectionForCap = 2,
   EProcMeshSliceCapOption__EProcMeshSliceCapOption_MAX = 3,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
