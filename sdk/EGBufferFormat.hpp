#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EGBufferFormat
{
   EGBufferFormat__Force8BitsPerChannel = 0,
   EGBufferFormat__Default = 1,
   EGBufferFormat__HighPrecisionNormals = 3,
   EGBufferFormat__Force16BitsPerChannel = 5,
   EGBufferFormat__EGBufferFormat_MAX = 6,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
