#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EEvaluatorMode
{
   EEvaluatorMode__EM_Standard = 0,
   EEvaluatorMode__EM_Freeze = 1,
   EEvaluatorMode__EM_DelayedFreeze = 2,
   EEvaluatorMode__EM_MAX = 3,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
