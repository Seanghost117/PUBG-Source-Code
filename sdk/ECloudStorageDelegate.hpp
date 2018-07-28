#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum ECloudStorageDelegate
{
   CSD_KeyValueReadComplete = 0,
   CSD_KeyValueWriteComplete = 1,
   CSD_ValueChanged = 2,
   CSD_DocumentQueryComplete = 3,
   CSD_DocumentReadComplete = 4,
   CSD_DocumentWriteComplete = 5,
   CSD_DocumentConflictDetected = 6,
   CSD_MAX = 7,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
