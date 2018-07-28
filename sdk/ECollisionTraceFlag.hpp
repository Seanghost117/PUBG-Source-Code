#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum ECollisionTraceFlag
{
   CTF_UseDefault = 0,
   CTF_UseSimpleAndComplex = 1,
   CTF_UseSimpleAsComplex = 2,
   CTF_UseComplexAsSimple = 3,
   CTF_MAX = 4,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
