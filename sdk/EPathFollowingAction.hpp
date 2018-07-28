#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EPathFollowingAction
{
   EPathFollowingAction__Error = 0,
   EPathFollowingAction__NoMove = 1,
   EPathFollowingAction__DirectMove = 2,
   EPathFollowingAction__PartialPath = 3,
   EPathFollowingAction__PathToGoal = 4,
   EPathFollowingAction__EPathFollowingAction_MAX = 5,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
