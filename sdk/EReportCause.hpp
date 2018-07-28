#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EReportCause
{
   EReportCause__Default = 0,
   EReportCause__Cheat = 1,
   EReportCause__TeamKill = 2,
   EReportCause__Teaming = 3,
   EReportCause__InappropriateID = 4,
   EReportCause__EReportCause_MAX = 5,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
