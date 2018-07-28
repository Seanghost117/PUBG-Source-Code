#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum ENiagaraCollisionMode
{
   ENiagaraCollisionMode__None = 0,
   ENiagaraCollisionMode__SceneGeometry = 1,
   ENiagaraCollisionMode__DepthBuffer = 2,
   ENiagaraCollisionMode__DistanceField = 3,
   ENiagaraCollisionMode__ENiagaraCollisionMode_MAX = 4,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
