#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum ECoherentUIGTSettingsSeverity
{
   ECoherentUIGTSettingsSeverity__Trace = 0,
   ECoherentUIGTSettingsSeverity__Debug = 1,
   ECoherentUIGTSettingsSeverity__Info = 2,
   ECoherentUIGTSettingsSeverity__Warning = 3,
   ECoherentUIGTSettingsSeverity__AssertFailure = 4,
   ECoherentUIGTSettingsSeverity__Error = 5,
   ECoherentUIGTSettingsSeverity__ECoherentUIGTSettingsSeverity_MAX = 6,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
