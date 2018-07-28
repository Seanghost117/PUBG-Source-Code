#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EComponentCreationMethod
{
   EComponentCreationMethod__Native = 0,
   EComponentCreationMethod__SimpleConstructionScript = 1,
   EComponentCreationMethod__UserConstructionScript = 2,
   EComponentCreationMethod__Instance = 3,
   EComponentCreationMethod__EComponentCreationMethod_MAX = 4,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
