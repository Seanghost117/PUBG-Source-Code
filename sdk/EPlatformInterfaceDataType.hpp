#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EPlatformInterfaceDataType
{
   PIDT_None = 0,
   PIDT_Int = 1,
   PIDT_Float = 2,
   PIDT_String = 3,
   PIDT_Object = 4,
   PIDT_Custom = 5,
   PIDT_MAX = 6,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
