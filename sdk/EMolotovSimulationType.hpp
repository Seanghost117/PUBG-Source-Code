#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EMolotovSimulationType
{
   EMolotovSimulationType__Molotov_SimulationImpact = 0,
   EMolotovSimulationType__Molotov_SimulationProjectile = 1,
   EMolotovSimulationType__Molotov_SimulationFragment = 2,
   EMolotovSimulationType__Molotov_SimulationVolumetric = 3,
   EMolotovSimulationType__Molotov_MAX = 4,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
