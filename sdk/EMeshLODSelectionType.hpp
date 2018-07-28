#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EMeshLODSelectionType
{
   EMeshLODSelectionType__AllLODs = 0,
   EMeshLODSelectionType__SpecificLOD = 1,
   EMeshLODSelectionType__CalculateLOD = 2,
   EMeshLODSelectionType__EMeshLODSelectionType_MAX = 3,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
