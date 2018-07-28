#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum ENodeTitleType
{
   ENodeTitleType__FullTitle = 0,
   ENodeTitleType__ListView = 1,
   ENodeTitleType__EditableTitle = 2,
   ENodeTitleType__MenuTitle = 3,
   ENodeTitleType__MAX_TitleTypes = 4,
   ENodeTitleType__ENodeTitleType_MAX = 5,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
