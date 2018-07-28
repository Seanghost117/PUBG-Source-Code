#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EActorSequenceObjectReferenceType
{
   EActorSequenceObjectReferenceType__ContextActor = 0,
   EActorSequenceObjectReferenceType__ExternalActor = 1,
   EActorSequenceObjectReferenceType__Component = 2,
   EActorSequenceObjectReferenceType__EActorSequenceObjectReferenceType_MAX = 3,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
