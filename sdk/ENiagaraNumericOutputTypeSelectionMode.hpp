#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum ENiagaraNumericOutputTypeSelectionMode
{
   ENiagaraNumericOutputTypeSelectionMode__None = 0,
   ENiagaraNumericOutputTypeSelectionMode__Largest = 1,
   ENiagaraNumericOutputTypeSelectionMode__Smallest = 2,
   ENiagaraNumericOutputTypeSelectionMode__Scalar = 3,
   ENiagaraNumericOutputTypeSelectionMode__ENiagaraNumericOutputTypeSelectionMode_MAX = 4,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
