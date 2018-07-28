#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EInAppPurchaseState
{
   EInAppPurchaseState__Unknown = 0,
   EInAppPurchaseState__Success = 1,
   EInAppPurchaseState__Failed = 2,
   EInAppPurchaseState__Cancelled = 3,
   EInAppPurchaseState__Invalid = 4,
   EInAppPurchaseState__NotAllowed = 5,
   EInAppPurchaseState__Restored = 6,
   EInAppPurchaseState__AlreadyOwned = 7,
   EInAppPurchaseState__EInAppPurchaseState_MAX = 8,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
