#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EEnvTestWeight
{
   EEnvTestWeight__None = 0,
   EEnvTestWeight__Square = 1,
   EEnvTestWeight__Inverse = 2,
   EEnvTestWeight__Unused = 3,
   EEnvTestWeight__Constant = 4,
   EEnvTestWeight__Skip = 5,
   EEnvTestWeight__EEnvTestWeight_MAX = 6,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
