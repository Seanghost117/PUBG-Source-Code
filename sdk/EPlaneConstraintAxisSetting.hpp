#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EPlaneConstraintAxisSetting
{
   EPlaneConstraintAxisSetting__Custom = 0,
   EPlaneConstraintAxisSetting__X = 1,
   EPlaneConstraintAxisSetting__Y = 2,
   EPlaneConstraintAxisSetting__Z = 3,
   EPlaneConstraintAxisSetting__UseGlobalPhysicsSetting = 4,
   EPlaneConstraintAxisSetting__EPlaneConstraintAxisSetting_MAX = 5,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
