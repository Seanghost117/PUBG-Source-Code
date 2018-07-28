#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum Beam2SourceTargetMethod
{
   PEB2STM_Default = 0,
   PEB2STM_UserSet = 1,
   PEB2STM_Emitter = 2,
   PEB2STM_Particle = 3,
   PEB2STM_Actor = 4,
   PEB2STM_MAX = 5,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
