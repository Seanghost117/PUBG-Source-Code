#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum ECollisionResponse
{
   ECR_Ignore = 0,
   ECR_Overlap = 1,
   ECR_Block = 2,
   ECR_MAX = 3,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
