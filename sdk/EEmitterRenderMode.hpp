#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EEmitterRenderMode
{
   ERM_Normal = 0,
   ERM_Point = 1,
   ERM_Cross = 2,
   ERM_LightsOnly = 3,
   ERM_None = 4,
   ERM_MAX = 5,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
