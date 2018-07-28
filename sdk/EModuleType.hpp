#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EModuleType
{
   EPMT_General = 0,
   EPMT_TypeData = 1,
   EPMT_Beam = 2,
   EPMT_Trail = 3,
   EPMT_Spawn = 4,
   EPMT_Required = 5,
   EPMT_Event = 6,
   EPMT_Light = 7,
   EPMT_SubUV = 8,
   EPMT_MAX = 9,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
