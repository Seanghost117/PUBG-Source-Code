#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EBlueprintType
{
   BPTYPE_Normal = 0,
   BPTYPE_Const = 1,
   BPTYPE_MacroLibrary = 2,
   BPTYPE_Interface = 3,
   BPTYPE_LevelScript = 4,
   BPTYPE_FunctionLibrary = 5,
   BPTYPE_MAX = 6,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
