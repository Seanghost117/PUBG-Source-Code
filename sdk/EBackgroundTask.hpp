#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EBackgroundTask
{
   BT_ShaderCompile = 0,
   BT_RenderGrassMap = 1,
   BT_BuildLighting = 2,
   BT_MAX = 3,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
