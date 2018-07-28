#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EAITaskPriority
{
   EAITaskPriority__Lowest = 0,
   EAITaskPriority__Low = 64,
   EAITaskPriority__AutonomousAI = 127,
   EAITaskPriority__High = 192,
   EAITaskPriority__Ultimate = 254,
   EAITaskPriority__EAITaskPriority_MAX = 255,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
