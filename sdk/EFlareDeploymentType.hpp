#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EFlareDeploymentType
{
   EFlareDeploymentType__Deploy_None = 0,
   EFlareDeploymentType__Deploy_InWhite = 1,
   EFlareDeploymentType__Deploy_InBlue = 2,
   EFlareDeploymentType__Deploy_Outside = 3,
   EFlareDeploymentType__Deploy_MAX = 4,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
