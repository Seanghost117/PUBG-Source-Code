#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum ERelativeTransformSpace
{
   RTS_World = 0,
   RTS_Actor = 1,
   RTS_Component = 2,
   RTS_ParentBoneSpace = 3,
   RTS_MAX = 4,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
