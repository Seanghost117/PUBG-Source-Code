#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EBTNodeResult
{
   EBTNodeResult__Succeeded = 0,
   EBTNodeResult__Failed = 1,
   EBTNodeResult__Aborted = 2,
   EBTNodeResult__InProgress = 3,
   EBTNodeResult__EBTNodeResult_MAX = 4,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
