#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EMicroTransactionDelegate
{
   MTD_PurchaseQueryComplete = 0,
   MTD_PurchaseComplete = 1,
   MTD_MAX = 2,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
