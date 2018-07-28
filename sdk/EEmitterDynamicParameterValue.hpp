#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EEmitterDynamicParameterValue
{
   EDPV_UserSet = 0,
   EDPV_AutoSet = 1,
   EDPV_VelocityX = 2,
   EDPV_VelocityY = 3,
   EDPV_VelocityZ = 4,
   EDPV_VelocityMag = 5,
   EDPV_MAX = 6,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
