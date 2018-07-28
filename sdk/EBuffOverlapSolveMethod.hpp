#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EBuffOverlapSolveMethod
{
   EBuffOverlapSolveMethod__IgnoreLater = 0,
   EBuffOverlapSolveMethod__Overwrite = 1,
   EBuffOverlapSolveMethod__RestartTimer = 2,
   EBuffOverlapSolveMethod__Stack = 3,
   EBuffOverlapSolveMethod__EBuffOverlapSolveMethod_MAX = 4,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
