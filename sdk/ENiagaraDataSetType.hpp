#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum ENiagaraDataSetType
{
   ENiagaraDataSetType__ParticleData = 0,
   ENiagaraDataSetType__Shared = 1,
   ENiagaraDataSetType__Event = 2,
   ENiagaraDataSetType__ENiagaraDataSetType_MAX = 3,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
