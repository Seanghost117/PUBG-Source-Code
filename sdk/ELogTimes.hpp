#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum ELogTimes
{
   ELogTimes__None = 0,
   ELogTimes__UTC = 1,
   ELogTimes__SinceGStartTime = 2,
   ELogTimes__ELogTimes_MAX = 3,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
