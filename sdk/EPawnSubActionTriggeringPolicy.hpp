#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EPawnSubActionTriggeringPolicy
{
   EPawnSubActionTriggeringPolicy__CopyBeforeTriggering = 0,
   EPawnSubActionTriggeringPolicy__ReuseInstances = 1,
   EPawnSubActionTriggeringPolicy__EPawnSubActionTriggeringPolicy_MAX = 2,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
