#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EMeshScreenAlignment
{
   PSMA_MeshFaceCameraWithRoll = 0,
   PSMA_MeshFaceCameraWithSpin = 1,
   PSMA_MeshFaceCameraWithLockedAxis = 2,
   PSMA_MAX = 3,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
