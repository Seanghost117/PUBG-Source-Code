#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EDrawDebugTrace
{
   EDrawDebugTrace__None = 0,
   EDrawDebugTrace__ForOneFrame = 1,
   EDrawDebugTrace__ForDuration = 2,
   EDrawDebugTrace__Persistent = 3,
   EDrawDebugTrace__EDrawDebugTrace_MAX = 4,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
