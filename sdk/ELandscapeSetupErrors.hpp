#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum ELandscapeSetupErrors
{
   LSE_None = 0,
   LSE_NoLandscapeInfo = 1,
   LSE_CollsionXY = 2,
   LSE_NoLayerInfo = 3,
   LSE_MAX = 4,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
