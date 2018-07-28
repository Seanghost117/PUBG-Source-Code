#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EMontageNotifyTickType
{
   EMontageNotifyTickType__Queued = 0,
   EMontageNotifyTickType__BranchingPoint = 1,
   EMontageNotifyTickType__EMontageNotifyTickType_MAX = 2,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
