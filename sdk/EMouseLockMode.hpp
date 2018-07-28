#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EMouseLockMode
{
   EMouseLockMode__DoNotLock = 0,
   EMouseLockMode__LockOnCapture = 1,
   EMouseLockMode__LockAlways = 2,
   EMouseLockMode__EMouseLockMode_MAX = 3,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
