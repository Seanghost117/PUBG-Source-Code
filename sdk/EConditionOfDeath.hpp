#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EConditionOfDeath
{
   EConditionOfDeath__HeatShot = 0,
   EConditionOfDeath__DBNO = 1,
   EConditionOfDeath__DBNOByHeadShot = 2,
   EConditionOfDeath__None = 3,
   EConditionOfDeath__EConditionOfDeath_MAX = 4,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
