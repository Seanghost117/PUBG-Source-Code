#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EBTParallelMode
{
   EBTParallelMode__AbortBackground = 0,
   EBTParallelMode__WaitForBackground = 1,
   EBTParallelMode__EBTParallelMode_MAX = 2,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
