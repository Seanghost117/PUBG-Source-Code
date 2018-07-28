#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EInterpCurveMode
{
   CIM_Linear = 0,
   CIM_CurveAuto = 1,
   CIM_Constant = 2,
   CIM_CurveUser = 3,
   CIM_CurveBreak = 4,
   CIM_CurveAutoClamped = 5,
   CIM_MAX = 6,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
