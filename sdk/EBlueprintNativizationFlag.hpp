#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EBlueprintNativizationFlag
{
   EBlueprintNativizationFlag__Disabled = 0,
   EBlueprintNativizationFlag__Dependency = 1,
   EBlueprintNativizationFlag__ExplicitlyEnabled = 2,
   EBlueprintNativizationFlag__EBlueprintNativizationFlag_MAX = 3,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
