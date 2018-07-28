#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EFormatArgumentType
{
   EFormatArgumentType__Int = 0,
   EFormatArgumentType__UInt = 1,
   EFormatArgumentType__Float = 2,
   EFormatArgumentType__Double = 3,
   EFormatArgumentType__Text = 4,
   EFormatArgumentType__Gender = 5,
   EFormatArgumentType__EFormatArgumentType_MAX = 6,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
