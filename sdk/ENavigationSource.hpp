#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum ENavigationSource
{
   ENavigationSource__FocusedWidget = 0,
   ENavigationSource__WidgetUnderCursor = 1,
   ENavigationSource__ENavigationSource_MAX = 2,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
