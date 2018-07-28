#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EAIRequestPriority
{
   EAIRequestPriority__SoftScript = 0,
   EAIRequestPriority__Logic = 1,
   EAIRequestPriority__HardScript = 2,
   EAIRequestPriority__Reaction = 3,
   EAIRequestPriority__Ultimate = 4,
   EAIRequestPriority__MAX = 5,
   EAIRequestPriority__EAIRequestPriority_MAX = 6,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
