#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EPawnActionMoveMode
{
   EPawnActionMoveMode__UsePathfinding = 0,
   EPawnActionMoveMode__StraightLine = 1,
   EPawnActionMoveMode__EPawnActionMoveMode_MAX = 2,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
