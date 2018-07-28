#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EAISenseNotifyType
{
   EAISenseNotifyType__OnEveryPerception = 0,
   EAISenseNotifyType__OnPerceptionChange = 1,
   EAISenseNotifyType__EAISenseNotifyType_MAX = 2,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
