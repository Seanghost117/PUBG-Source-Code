#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EReportedSessionType
{
   EReportedSessionType__PublicOrCustomGame = 0,
   EReportedSessionType__Killcam = 1,
   EReportedSessionType__Replay = 2,
   EReportedSessionType__EReportedSessionType_MAX = 3,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
