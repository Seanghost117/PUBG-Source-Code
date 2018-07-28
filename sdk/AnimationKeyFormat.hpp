#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum AnimationKeyFormat
{
   AKF_ConstantKeyLerp = 0,
   AKF_VariableKeyLerp = 1,
   AKF_PerTrackCompression = 2,
   AKF_MAX = 3,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
