#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EManifestFileHeader
{
   EManifestFileHeader__STORED_RAW = 0,
   EManifestFileHeader__STORED_COMPRESSED = 1,
   EManifestFileHeader__STORED_MAX = 2,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
