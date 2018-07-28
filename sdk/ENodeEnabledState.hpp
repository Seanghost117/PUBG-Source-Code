#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum ENodeEnabledState
{
   ENodeEnabledState__Enabled = 0,
   ENodeEnabledState__Disabled = 1,
   ENodeEnabledState__DevelopmentOnly = 2,
   ENodeEnabledState__ENodeEnabledState_MAX = 3,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
