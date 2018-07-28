#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum ENiagaraSpriteFacingMode
{
   ENiagaraSpriteFacingMode__FaceCamera = 0,
   ENiagaraSpriteFacingMode__FaceCameraPlane = 1,
   ENiagaraSpriteFacingMode__CustomFacingVector = 2,
   ENiagaraSpriteFacingMode__ENiagaraSpriteFacingMode_MAX = 3,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
