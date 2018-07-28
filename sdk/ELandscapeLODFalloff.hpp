#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum ELandscapeLODFalloff
{
   ELandscapeLODFalloff__Linear = 0,
   ELandscapeLODFalloff__SquareRoot = 1,
   ELandscapeLODFalloff__ELandscapeLODFalloff_MAX = 2,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
