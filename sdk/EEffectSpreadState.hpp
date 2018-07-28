#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EEffectSpreadState
{
   EEffectSpreadState__ESS_InitialTrace = 0,
   EEffectSpreadState__ESS_InitialProcess = 1,
   EEffectSpreadState__ESS_Spreading = 2,
   EEffectSpreadState__ESS_SpreadDone = 3,
   EEffectSpreadState__ESS_Ending = 4,
   EEffectSpreadState__ESS_MAX = 5,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
