#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum ENavCostDisplay
{
   ENavCostDisplay__TotalCost = 0,
   ENavCostDisplay__HeuristicOnly = 1,
   ENavCostDisplay__RealCostOnly = 2,
   ENavCostDisplay__ENavCostDisplay_MAX = 3,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
