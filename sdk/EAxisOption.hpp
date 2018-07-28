#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EAxisOption
{
   EAxisOption__X = 0,
   EAxisOption__Y = 1,
   EAxisOption__Z = 2,
   EAxisOption__X_Neg = 3,
   EAxisOption__Y_Neg = 4,
   EAxisOption__Z_Neg = 5,
   EAxisOption__Custom = 6,
   EAxisOption__EAxisOption_MAX = 7,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
