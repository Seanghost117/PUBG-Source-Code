#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EGraphType
{
   GT_Function = 0,
   GT_Ubergraph = 1,
   GT_Macro = 2,
   GT_Animation = 3,
   GT_StateMachine = 4,
   GT_MAX = 5,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
