#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EBTFlowAbortMode
{
   EBTFlowAbortMode__None = 0,
   EBTFlowAbortMode__LowerPriority = 1,
   EBTFlowAbortMode__Self = 2,
   EBTFlowAbortMode__Both = 3,
   EBTFlowAbortMode__EBTFlowAbortMode_MAX = 4,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
