#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EIndoorOutdoorMask
{
   IOM_NONE = 0,
   IOM_INDOOR = 1,
   IOM_OUTDOOR = 2,
   IOM_BOTH = 3,
   IOM_MAX = 4,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
