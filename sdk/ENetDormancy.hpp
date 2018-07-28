#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum ENetDormancy
{
   DORM_Never = 0,
   DORM_Awake = 1,
   DORM_DormantAll = 2,
   DORM_DormantPartial = 3,
   DORM_Initial = 4,
   DORN_MAX = 5,
   ENetDormancy_MAX = 6,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
