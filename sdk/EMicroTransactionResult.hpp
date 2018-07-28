#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EMicroTransactionResult
{
   MTR_Succeeded = 0,
   MTR_Failed = 1,
   MTR_Canceled = 2,
   MTR_RestoredFromServer = 3,
   MTR_MAX = 4,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
