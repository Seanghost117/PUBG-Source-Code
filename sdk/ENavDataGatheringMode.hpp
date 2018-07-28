#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum ENavDataGatheringMode
{
   ENavDataGatheringMode__Default = 0,
   ENavDataGatheringMode__Instant = 1,
   ENavDataGatheringMode__Lazy = 2,
   ENavDataGatheringMode__ENavDataGatheringMode_MAX = 3,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
