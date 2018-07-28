#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EPoseDriverType
{
   EPoseDriverType__SwingAndTwist = 0,
   EPoseDriverType__SwingOnly = 1,
   EPoseDriverType__Translation = 2,
   EPoseDriverType__EPoseDriverType_MAX = 3,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
