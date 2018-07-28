#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EControlConstraint
{
   EControlConstraint__Orientation = 0,
   EControlConstraint__Translation = 1,
   EControlConstraint__Max = 2,
   EControlConstraint__EControlConstraint_MAX = 3,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
