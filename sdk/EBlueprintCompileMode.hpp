#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EBlueprintCompileMode
{
   EBlueprintCompileMode__Default = 0,
   EBlueprintCompileMode__Development = 1,
   EBlueprintCompileMode__FinalRelease = 2,
   EBlueprintCompileMode__EBlueprintCompileMode_MAX = 3,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
