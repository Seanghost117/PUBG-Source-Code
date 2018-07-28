#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EParticleSortMode
{
   PSORTMODE_None = 0,
   PSORTMODE_ViewProjDepth = 1,
   PSORTMODE_DistanceToView = 2,
   PSORTMODE_Age_OldestFirst = 3,
   PSORTMODE_Age_NewestFirst = 4,
   PSORTMODE_MAX = 5,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
