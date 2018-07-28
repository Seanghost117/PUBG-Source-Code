#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EFiringMode
{
   EFiringMode__Normal = 0,
   EFiringMode__Burst = 1,
   EFiringMode__FullAuto = 2,
   EFiringMode__EFiringMode_MAX = 3,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
