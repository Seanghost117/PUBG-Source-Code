#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EFullyLoadPackageType
{
   FULLYLOAD_Map = 0,
   FULLYLOAD_Game_PreLoadClass = 1,
   FULLYLOAD_Game_PostLoadClass = 2,
   FULLYLOAD_Always = 3,
   FULLYLOAD_Mutator = 4,
   FULLYLOAD_MAX = 5,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
