#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EFireEventsAtPosition
{
   EFireEventsAtPosition__AtStartOfEvaluation = 0,
   EFireEventsAtPosition__AtEndOfEvaluation = 1,
   EFireEventsAtPosition__AfterSpawn = 2,
   EFireEventsAtPosition__EFireEventsAtPosition_MAX = 3,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
