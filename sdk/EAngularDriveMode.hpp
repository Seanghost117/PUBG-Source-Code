#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EAngularDriveMode
{
   EAngularDriveMode__SLERP = 0,
   EAngularDriveMode__TwistAndSwing = 1,
   EAngularDriveMode__EAngularDriveMode_MAX = 2,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
