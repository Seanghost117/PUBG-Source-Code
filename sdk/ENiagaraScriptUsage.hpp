#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum ENiagaraScriptUsage
{
   ENiagaraScriptUsage__Function = 0,
   ENiagaraScriptUsage__Module = 1,
   ENiagaraScriptUsage__SpawnScript = 2,
   ENiagaraScriptUsage__SpawnScriptInterpolated = 3,
   ENiagaraScriptUsage__UpdateScript = 4,
   ENiagaraScriptUsage__EffectScript = 5,
   ENiagaraScriptUsage__ENiagaraScriptUsage_MAX = 6,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
