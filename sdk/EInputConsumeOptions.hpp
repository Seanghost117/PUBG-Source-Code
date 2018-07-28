#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EInputConsumeOptions
{
   ICO_ConsumeAll = 0,
   ICO_ConsumeBoundKeys = 1,
   ICO_ConsumeNone = 2,
   ICO_MAX = 3,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
