#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum AnimationCompressionFormat
{
   ACF_None = 0,
   ACF_Float96NoW = 1,
   ACF_Fixed48NoW = 2,
   ACF_IntervalFixed32NoW = 3,
   ACF_Fixed32NoW = 4,
   ACF_Float32NoW = 5,
   ACF_Identity = 6,
   ACF_MAX = 7,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
