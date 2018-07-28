#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EMaterialTessellationMode
{
   MTM_NoTessellation = 0,
   MTM_FlatTessellation = 1,
   MTM_PNTriangles = 2,
   MTM_MAX = 3,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
