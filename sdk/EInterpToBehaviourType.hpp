#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EInterpToBehaviourType
{
   EInterpToBehaviourType__OneShot = 0,
   EInterpToBehaviourType__OneShot_Reverse = 1,
   EInterpToBehaviourType__Loop_Reset = 2,
   EInterpToBehaviourType__PingPong = 3,
   EInterpToBehaviourType__EInterpToBehaviourType_MAX = 4,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
