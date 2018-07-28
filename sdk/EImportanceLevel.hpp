#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EImportanceLevel
{
   IL_Off = 0,
   IL_Lowest = 1,
   IL_Low = 2,
   IL_Normal = 3,
   IL_High = 4,
   IL_Highest = 5,
   TEMP_BROKEN2 = 6,
   EImportanceLevel_MAX = 7,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
