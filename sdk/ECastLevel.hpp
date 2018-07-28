#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum ECastLevel
{
   ECastLevel__None = 0,
   ECastLevel__NoRestriction = 1,
   ECastLevel__Restriction = 2,
   ECastLevel__ECastLevel_MAX = 3,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
