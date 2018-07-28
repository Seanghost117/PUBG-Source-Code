#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EProgressBarFillType
{
   EProgressBarFillType__LeftToRight = 0,
   EProgressBarFillType__RightToLeft = 1,
   EProgressBarFillType__FillFromCenter = 2,
   EProgressBarFillType__TopToBottom = 3,
   EProgressBarFillType__BottomToTop = 4,
   EProgressBarFillType__EProgressBarFillType_MAX = 5,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
