#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EClearSceneOptions
{
   EClearSceneOptions__NoClear = 0,
   EClearSceneOptions__HardwareClear = 1,
   EClearSceneOptions__QuadAtMaxZ = 2,
   EClearSceneOptions__EClearSceneOptions_MAX = 3,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
