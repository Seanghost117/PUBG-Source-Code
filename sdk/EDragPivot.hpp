#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EDragPivot
{
   EDragPivot__MouseDown = 0,
   EDragPivot__TopLeft = 1,
   EDragPivot__TopCenter = 2,
   EDragPivot__TopRight = 3,
   EDragPivot__CenterLeft = 4,
   EDragPivot__CenterCenter = 5,
   EDragPivot__CenterRight = 6,
   EDragPivot__BottomLeft = 7,
   EDragPivot__BottomCenter = 8,
   EDragPivot__BottomRight = 9,
   EDragPivot__EDragPivot_MAX = 10,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
