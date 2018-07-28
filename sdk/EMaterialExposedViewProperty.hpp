#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EMaterialExposedViewProperty
{
   MEVP_BufferSize = 0,
   MEVP_FieldOfView = 1,
   MEVP_TanHalfFieldOfView = 2,
   MEVP_ViewSize = 3,
   MEVP_WorldSpaceViewPosition = 4,
   MEVP_WorldSpaceCameraPosition = 5,
   MEVP_ViewportOffset = 6,
   MEVP_MAX = 7,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
