#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum ENiagaraScriptCompileStatus
{
   ENiagaraScriptCompileStatus__NCS_Unknown = 0,
   ENiagaraScriptCompileStatus__NCS_Dirty = 1,
   ENiagaraScriptCompileStatus__NCS_Error = 2,
   ENiagaraScriptCompileStatus__NCS_UpToDate = 3,
   ENiagaraScriptCompileStatus__NCS_BeingCreated = 4,
   ENiagaraScriptCompileStatus__NCS_UpToDateWithWarnings = 5,
   ENiagaraScriptCompileStatus__NCS_MAX = 6,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
