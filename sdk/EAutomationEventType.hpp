#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EAutomationEventType
{
   EAutomationEventType__Info = 0,
   EAutomationEventType__Warning = 1,
   EAutomationEventType__Error = 2,
   EAutomationEventType__EAutomationEventType_MAX = 3,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
