#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EFlipbookCollisionMode
{
   EFlipbookCollisionMode__NoCollision = 0,
   EFlipbookCollisionMode__FirstFrameCollision = 1,
   EFlipbookCollisionMode__EachFrameCollision = 2,
   EFlipbookCollisionMode__EFlipbookCollisionMode_MAX = 3,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
