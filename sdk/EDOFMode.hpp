#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EDOFMode
{
   EDOFMode__Default = 0,
   EDOFMode__SixDOF = 1,
   EDOFMode__YZPlane = 2,
   EDOFMode__XZPlane = 3,
   EDOFMode__XYPlane = 4,
   EDOFMode__CustomPlane = 5,
   EDOFMode__None = 6,
   EDOFMode__EDOFMode_MAX = 7,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
