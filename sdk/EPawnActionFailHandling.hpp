#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EPawnActionFailHandling
{
   EPawnActionFailHandling__RequireSuccess = 0,
   EPawnActionFailHandling__IgnoreFailure = 1,
   EPawnActionFailHandling__EPawnActionFailHandling_MAX = 2,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
