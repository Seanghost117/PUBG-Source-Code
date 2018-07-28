#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum ECustomizableObjectGroupType
{
   COGT_TOGGLE = 0,
   COGT_ALL = 1,
   COGT_ONE = 2,
   COGT_ONE_OR_NONE = 3,
   COGT_MAX = 4,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
