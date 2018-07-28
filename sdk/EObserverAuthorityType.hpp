#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EObserverAuthorityType
{
   EObserverAuthorityType__None = 0,
   EObserverAuthorityType__FromBeginning = 1,
   EObserverAuthorityType__AfterDeath = 2,
   EObserverAuthorityType__AfterExtermination = 3,
   EObserverAuthorityType__EObserverAuthorityType_MAX = 4,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
