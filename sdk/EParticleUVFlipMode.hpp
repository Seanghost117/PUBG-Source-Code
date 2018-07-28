#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EParticleUVFlipMode
{
   EParticleUVFlipMode__None = 0,
   EParticleUVFlipMode__FlipUV = 1,
   EParticleUVFlipMode__FlipUOnly = 2,
   EParticleUVFlipMode__FlipVOnly = 3,
   EParticleUVFlipMode__RandomFlipUV = 4,
   EParticleUVFlipMode__RandomFlipUOnly = 5,
   EParticleUVFlipMode__RandomFlipVOnly = 6,
   EParticleUVFlipMode__RandomFlipUVIndependent = 7,
   EParticleUVFlipMode__EParticleUVFlipMode_MAX = 8,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
