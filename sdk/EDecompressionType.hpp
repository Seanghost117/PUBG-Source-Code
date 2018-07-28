#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EDecompressionType
{
   DTYPE_Setup = 0,
   DTYPE_Invalid = 1,
   DTYPE_Preview = 2,
   DTYPE_Native = 3,
   DTYPE_RealTime = 4,
   DTYPE_Procedural = 5,
   DTYPE_Xenon = 6,
   DTYPE_Streaming = 7,
   DTYPE_MAX = 8,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
