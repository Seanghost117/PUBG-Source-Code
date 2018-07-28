#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EDrivenDestinationMode
{
   EDrivenDestinationMode__Bone = 0,
   EDrivenDestinationMode__MorphTarget = 1,
   EDrivenDestinationMode__MaterialParameter = 2,
   EDrivenDestinationMode__EDrivenDestinationMode_MAX = 3,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
