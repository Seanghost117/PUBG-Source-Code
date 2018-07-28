#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EAntiAliasingMethod
{
   AAM_None = 0,
   AAM_FXAA = 1,
   AAM_TemporalAA = 2,
   AAM_MSAA = 3,
   AAM_MAX = 4,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
