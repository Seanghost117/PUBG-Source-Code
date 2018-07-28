#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EAttachmentRule
{
   EAttachmentRule__KeepRelative = 0,
   EAttachmentRule__KeepWorld = 1,
   EAttachmentRule__SnapToTarget = 2,
   EAttachmentRule__EAttachmentRule_MAX = 3,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
