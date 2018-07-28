#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EReportDetailCauseType
{
   EReportDetailCauseType__AutoAim = 0,
   EReportDetailCauseType__NoRecoil = 1,
   EReportDetailCauseType__EspOrPenetration = 2,
   EReportDetailCauseType__Speedhack = 3,
   EReportDetailCauseType__EReportDetailCauseType_MAX = 4,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
