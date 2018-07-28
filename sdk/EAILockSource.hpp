#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EAILockSource
{
   EAILockSource__Animation = 0,
   EAILockSource__Logic = 1,
   EAILockSource__Script = 2,
   EAILockSource__Gameplay = 3,
   EAILockSource__MAX = 4,
   EAILockSource__EAILockSource_MAX = 5,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
