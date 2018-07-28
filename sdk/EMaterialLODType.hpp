#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EMaterialLODType
{
   EMaterialLODType__Off = 0,
   EMaterialLODType__BakeTexture = 1,
   EMaterialLODType__BakeVertexColor = 2,
   EMaterialLODType__Replace = 3,
   EMaterialLODType__EMaterialLODType_MAX = 4,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
