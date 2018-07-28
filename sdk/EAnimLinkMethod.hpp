#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EAnimLinkMethod
{
   EAnimLinkMethod__Absolute = 0,
   EAnimLinkMethod__Relative = 1,
   EAnimLinkMethod__Proportional = 2,
   EAnimLinkMethod__EAnimLinkMethod_MAX = 3,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
