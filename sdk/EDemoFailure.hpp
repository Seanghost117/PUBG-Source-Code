#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EDemoFailure
{
   EDemoFailure__None = 0,
   EDemoFailure__PlayCommand = 1,
   EDemoFailure__PlayNoWorld = 2,
   EDemoFailure__PlayPIE = 3,
   EDemoFailure__PlayCreateDemoDriver = 4,
   EDemoFailure__Connect = 5,
   EDemoFailure__ConnectNoWorld = 6,
   EDemoFailure__ConnectNoGameInstance = 7,
   EDemoFailure__ConnectInitBase = 8,
   EDemoFailure__ConnectStreamingReady = 9,
   EDemoFailure__ConnectDemoNotFound = 10,
   EDemoFailure__ConnectCorrupt = 11,
   EDemoFailure__ConnectSpecificCorrupt = 12,
   EDemoFailure__ConnectPostNoWorld = 13,
   EDemoFailure__ConnectLoadMap = 14,
   EDemoFailure__TickDispatchStreamer = 15,
   EDemoFailure__TickDispatchFileAr = 16,
   EDemoFailure__ConditionallyReadFrame = 17,
   EDemoFailure__ConditionallyReadFrameFileAr = 18,
   EDemoFailure__ConditionallyReadFrameStreamer = 19,
   EDemoFailure__ConditionallyReadFrameTimeChecksum = 20,
   EDemoFailure__ConditionallyReadFrameFileAr2 = 21,
   EDemoFailure__ConditionallyReadFrameExternalData = 22,
   EDemoFailure__ConditionallyReadFramePacket = 23,
   EDemoFailure__ConditionallyProcessPacket = 24,
   EDemoFailure__DownloadHeader = 25,
   EDemoFailure__DownloadHeaderDemoNotFound = 26,
   EDemoFailure__DownloadHeaderCorrupt = 27,
   EDemoFailure__DownloadHeaderSpecificCorrupt = 28,
   EDemoFailure__DownloadHeaderLevelNamesAndTimes = 29,
   EDemoFailure__CheckpointReady = 30,
   EDemoFailure__CheckpointArchiveEmpty = 31,
   EDemoFailure__CheckpointReadFrame = 32,
   EDemoFailure__CheckpointReadFrameFileAr = 33,
   EDemoFailure__CheckpointReadFrameStreamer = 34,
   EDemoFailure__CheckpointReadFrameTimeChecksum = 35,
   EDemoFailure__CheckpointReadFrameFileAr2 = 36,
   EDemoFailure__CheckpointReadFrameExternalData = 37,
   EDemoFailure__CheckpointReadFramePacket = 38,
   EDemoFailure__CheckpointProcessPacket = 39,
   EDemoFailure__RecCommand = 40,
   EDemoFailure__RecNoReplays = 41,
   EDemoFailure__RecNoWorld = 42,
   EDemoFailure__RecPIE = 43,
   EDemoFailure__RecAlreadyPlay = 44,
   EDemoFailure__RecCreateDemoDriver = 45,
   EDemoFailure__Listen = 46,
   EDemoFailure__ListenInitBase = 47,
   EDemoFailure__ListenNoWorldSettings = 48,
   EDemoFailure__ListenWriteHeader = 49,
   EDemoFailure__ListenStreamingReady = 50,
   EDemoFailure__TickFlushStreamer = 51,
   EDemoFailure__TickFlushFileAr = 52,
   EDemoFailure__SeamlessTravelWriteHeader = 53,
   EDemoFailure__EDemoFailure_MAX = 54,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
