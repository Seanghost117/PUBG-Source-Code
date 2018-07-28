#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EClampMode
{
   CMODE_Clamp = 0,
   CMODE_ClampMin = 1,
   CMODE_ClampMax = 2,
   CMODE_MAX = 3,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
