#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EInputEvent
{
   IE_Pressed = 0,
   IE_Released = 1,
   IE_Repeat = 2,
   IE_DoubleClick = 3,
   IE_Axis = 4,
   IE_MAX = 5,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
