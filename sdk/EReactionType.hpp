#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EReactionType
{
   EReactionType__Reaciton_None = 0,
   EReactionType__Reaction_Physics = 1,
   EReactionType__Reaction_Destructible = 2,
   EReactionType__EReactionType_MAX = 3,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
