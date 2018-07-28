#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum ERangeBoundTypes
{
   ERangeBoundTypes__Exclusive = 0,
   ERangeBoundTypes__Inclusive = 1,
   ERangeBoundTypes__Open = 2,
   ERangeBoundTypes__ERangeBoundTypes_MAX = 3,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
