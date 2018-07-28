#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum ENotifyTriggerMode
{
   ENotifyTriggerMode__AllAnimations = 0,
   ENotifyTriggerMode__HighestWeightedAnimation = 1,
   ENotifyTriggerMode__None = 2,
   ENotifyTriggerMode__ENotifyTriggerMode_MAX = 3,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
