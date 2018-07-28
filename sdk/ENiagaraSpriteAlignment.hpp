#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum ENiagaraSpriteAlignment
{
   ENiagaraSpriteAlignment__Unaligned = 0,
   ENiagaraSpriteAlignment__VelocityAligned = 1,
   ENiagaraSpriteAlignment__CustomAlignment = 2,
   ENiagaraSpriteAlignment__ENiagaraSpriteAlignment_MAX = 3,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
