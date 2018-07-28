#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EPathExistanceQueryType
{
   EPathExistanceQueryType__NavmeshRaycast2D = 0,
   EPathExistanceQueryType__HierarchicalQuery = 1,
   EPathExistanceQueryType__RegularPathFinding = 2,
   EPathExistanceQueryType__EPathExistanceQueryType_MAX = 3,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
