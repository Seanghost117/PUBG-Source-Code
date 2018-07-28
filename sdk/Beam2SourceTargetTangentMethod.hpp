#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum Beam2SourceTargetTangentMethod
{
   PEB2STTM_Direct = 0,
   PEB2STTM_UserSet = 1,
   PEB2STTM_Distribution = 2,
   PEB2STTM_Emitter = 3,
   PEB2STTM_MAX = 4,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
