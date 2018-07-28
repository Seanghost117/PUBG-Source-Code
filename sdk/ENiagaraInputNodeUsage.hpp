#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum ENiagaraInputNodeUsage
{
   ENiagaraInputNodeUsage__Undefined = 0,
   ENiagaraInputNodeUsage__Parameter = 1,
   ENiagaraInputNodeUsage__Attribute = 2,
   ENiagaraInputNodeUsage__SystemConstant = 3,
   ENiagaraInputNodeUsage__ENiagaraInputNodeUsage_MAX = 4,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
