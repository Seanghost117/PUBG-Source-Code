#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EParameterLUTChannel
{
   EParameterLUTChannel__R = 0,
   EParameterLUTChannel__G = 1,
   EParameterLUTChannel__B = 2,
   EParameterLUTChannel__A = 3,
   EParameterLUTChannel__RGBA = 4,
   EParameterLUTChannel__Undefined = 5,
   EParameterLUTChannel__EParameterLUTChannel_MAX = 6,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
