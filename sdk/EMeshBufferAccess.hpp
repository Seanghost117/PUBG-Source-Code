#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EMeshBufferAccess
{
   EMeshBufferAccess__Default = 0,
   EMeshBufferAccess__ForceCPUAndGPU = 1,
   EMeshBufferAccess__EMeshBufferAccess_MAX = 2,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
