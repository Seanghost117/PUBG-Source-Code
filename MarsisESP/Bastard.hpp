#pragma once
#include <Windows.h>
#include <TlHelp32.h>
#include <Psapi.h>
#include <string>
#include <vector>
#include <algorithm>
#include <DbgHelp.h> // For cross-architure support
#include "GetHandle.hpp"

#pragma comment (lib, "Dbghelp.lib") // For cross-architure support

// Bypass configuration
#define TIMEOUT_ORPHANIZE 5000			// Max time to wait for parent to die and make sure we are orphan. Best security = INFINITE | Failsafe = 0-10000
#define KILL_PARENT_IF_PROBLEM FALSE	// If problem while orphaning, can try to kill parent. Best security = TRUE | Failsafe = FALSE
#define RUN_IF_CANT_ORPHAN TRUE			// If impossible to orphan for any reason, you can decide to abort by security. Best security = FALSE | Failsafe = TRUE

// If using system processes handles, these defines will be used to find & use them automatically
#define PARENT_LSASS -1
#define PARENT_PCASVC -2
#define PARENT_CSRSS -3
#define PROCESS_NAME_LSASS L"lsass.exe"
#define PROCESS_NAME_CSRSS L"csrss.exe"
#define SERVICE_NAME_PCASVC L"PcaSvc"

#define CMDLINE_MAX_LENGTH 0x7FFF		// See CreateProcess documentation
#define KERNEL32DLL L"kernel32.dll"
#define SET_HANDLE_INFO_API_FUNC "SetHandleInformation"

// Functions prototypes
HANDLE GetBastardHandle(std::wstring targetProcess, DWORD parentPID, BOOL makeOrphan = TRUE);
HANDLE ReceiveBastardHandle(std::wstring targetProcess, DWORD parentPID, BOOL makeOrphan = TRUE);
PROCESS_INFORMATION MakeBastardChild(DWORD dwParentPID, std::wstring childProcess = L"", std::wstring cmdLineArgs = L"");
std::vector<DWORD> GetPIDs(std::wstring targetProcessName = L"");
DWORD GetAutoParentPID(DWORD parentPID = 0);
DWORD GetOwnParentPid();
DWORD FindServicePid(LPCTSTR ServiceName);
BOOL processIsX64(HANDLE hProcess = NULL);
BOOL SetRemoteHandleInformation(DWORD parentProcess, HANDLE handleID, DWORD dwMask, DWORD dwFlags);
DWORD64 FindModuleBaseAddrInProcess(DWORD targetPID, std::wstring moduleToFind = L"");
DWORD64 GetRvaOfFunctionInDLL(std::wstring dllFile, std::string functionName);

HANDLE GetBastardHandle(std::wstring targetProcess, DWORD parentPID, BOOL makeOrphan) {
	if (targetProcess == L"" || parentPID == NULL)
		return NULL; // No target process or parent specified

					 // Finding parent process ID automatically if a constant has been used
	DWORD foundParentPID = parentPID;
	if (parentPID == PARENT_LSASS || parentPID == PARENT_PCASVC || parentPID == PARENT_CSRSS)
		foundParentPID = GetAutoParentPID(parentPID);
	if (foundParentPID == NULL)
		return NULL; // Couldn't find parent PID

					 // First, making sure that we are not already the bastard child with the handle
	HANDLE hBastard = ReceiveBastardHandle(targetProcess, foundParentPID, makeOrphan);
	if (hBastard != NULL)
		return hBastard; // We are the bastard with the handle already!

						 // Getting the handle ID to the target process in the parent and making it inheritable
	HANDLE handleIdInParent = GetHandleIdTo(targetProcess, foundParentPID);
	if (handleIdInParent == NULL)
		return NULL; // No handle to target found in parent
	if (!SetRemoteHandleInformation(foundParentPID, handleIdInParent, HANDLE_FLAG_INHERIT, HANDLE_FLAG_INHERIT))
		return NULL; // Failed to make handle inheritable

					 // Creating child process externally using STARTUPINFOEX which will inherit the desired handle
	PROCESS_INFORMATION piBastard = MakeBastardChild(foundParentPID);
	if (piBastard.dwProcessId == NULL)
		return NULL; // Failed to make bastard child process

					 // Resetting handle as non inheritable to cover our tracks
	if (!SetRemoteHandleInformation(foundParentPID, handleIdInParent, HANDLE_FLAG_INHERIT, 0))
		return NULL; // Failed to make handle non-inheritable

	ExitProcess(EXIT_SUCCESS); // Success, passing control to second instance
}

HANDLE ReceiveBastardHandle(std::wstring targetProcess, DWORD parentPID, BOOL makeOrphan) {
	HANDLE handleIdToTarget = GetHandleIdTo(targetProcess);
	if (handleIdToTarget == NULL)
		return NULL; // We do not have a handle to the target process (we're not the bastard)

	if (makeOrphan == FALSE)
		goto GiveHandleNonInheritable; // User has not requested to make the process orphan, returning the desired handle directly

									   // Checking if we are orphan as demanded
	DWORD bastardParentPid = GetOwnParentPid();
	if (bastardParentPid == parentPID) {
		// We are the direct child, orphaning by spawning new instance and exiting this one, breaking the parenthood chain
		PROCESS_INFORMATION piBastard = MakeBastardChild(GetCurrentProcessId());
		if (piBastard.dwProcessId == NULL) {
			if (RUN_IF_CANT_ORPHAN)
				goto GiveHandleNonInheritable;
			else
				return NULL;
		}
		ExitProcess(EXIT_SUCCESS); // Last instance spawned, terminating this one to break parenthood chain & make it orphan
	}

	HANDLE hParentSync = OpenProcess(SYNCHRONIZE, FALSE, bastardParentPid);
	if (hParentSync == NULL) // Parent is dead, we are orphan
		goto GiveHandleNonInheritable; // Success

									   // We are not orphan, waiting for parent to die
	DWORD waitReturn = WaitForSingleObject(hParentSync, TIMEOUT_ORPHANIZE);
	CloseHandle(hParentSync);

	if (waitReturn != WAIT_OBJECT_0 && KILL_PARENT_IF_PROBLEM) {
		HANDLE hParentTerm = OpenProcess(PROCESS_TERMINATE, FALSE, bastardParentPid);
		if (hParentTerm == NULL)
			goto GiveHandleNonInheritable;
		TerminateProcess(hParentTerm, EXIT_FAILURE);
		CloseHandle(hParentTerm);
	}

GiveHandleNonInheritable:
	SetHandleInformation(handleIdToTarget, HANDLE_FLAG_INHERIT, 0);
	return handleIdToTarget;
}

// Spawns a process (by default another instance of the current process) as child of another process externally (using STARTUPINFOEX)
PROCESS_INFORMATION MakeBastardChild(DWORD dwParentPID, std::wstring childProcess, std::wstring cmdLineArgs) {
	PROCESS_INFORMATION pi;
	SecureZeroMemory(&pi, sizeof(pi));

	// Initialising attributes for process creation
	SIZE_T cbAttributeListSize = 0;
	InitializeProcThreadAttributeList(NULL, 1, 0, &cbAttributeListSize);
	PPROC_THREAD_ATTRIBUTE_LIST pAttributeList = NULL;
	pAttributeList = (PPROC_THREAD_ATTRIBUTE_LIST)HeapAlloc(GetProcessHeap(), 0, cbAttributeListSize);
	if (NULL == pAttributeList)
		return pi; // Failed
	if (!InitializeProcThreadAttributeList(pAttributeList, 1, 0, &cbAttributeListSize))
		return pi; // Failed

				   // Getting handle on parent with only PROCESS_CREATE_PROCESS permission (required by UpdateProcThreadAttribute)
	HANDLE hParentProcess = NULL;
	hParentProcess = OpenProcess(PROCESS_CREATE_PROCESS, FALSE, dwParentPID);
	if (NULL == hParentProcess)
		return pi; // Failed

				   // Updating the attribute list with the desired parent for the future process to start
	if (!UpdateProcThreadAttribute(pAttributeList, 0, PROC_THREAD_ATTRIBUTE_PARENT_PROCESS, &hParentProcess, sizeof(HANDLE), NULL, NULL))
		return pi; // Failed

				   // If child process is unspecified, we will spawning another instance of the current process, getting own path & image name
	if (childProcess == L"") {
		WCHAR thisProgram[MAX_PATH] = L"";
		DWORD myLength = GetModuleFileName(NULL, (LPWSTR)&thisProgram, MAX_PATH);
		childProcess = thisProgram;
	}

	// Command line arguments specified, formating the wide string to give CreateProcess
	std::wstring cmdLineFullArgs;
	if (cmdLineArgs != L"") {
		cmdLineFullArgs = L'"' + childProcess + L'"' + L' ' + cmdLineArgs;
		cmdLineFullArgs.resize(CMDLINE_MAX_LENGTH); // Getting the max possible size to avoid access violation (accordingly to CreateProcess documentation)
	}

	// Creating the bastard child process
	STARTUPINFOEX sie = { sizeof(sie) };
	sie.lpAttributeList = pAttributeList;
	CreateProcess(childProcess.c_str(), (LPWSTR)cmdLineFullArgs.c_str(), NULL, NULL, TRUE, EXTENDED_STARTUPINFO_PRESENT | CREATE_NEW_CONSOLE, NULL, NULL, &sie.StartupInfo, &pi);

	// Whether it succeeded or not, returning the PROCESS_INFORMATION (can check if failed if everything is null inside, since it's zeroed)
	return pi;
}

// Get PIDs from process name
std::vector<DWORD> GetPIDs(std::wstring targetProcessName) {
	std::vector<DWORD> pids;
	if (targetProcessName == L"")
		return pids; // No process name given
	HANDLE snap = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0); // All processes
	PROCESSENTRY32W entry; // Current process
	entry.dwSize = sizeof entry;
	if (!Process32FirstW(snap, &entry)) // Start with the first in snapshot
		return pids;
	do {
		if (std::wstring(entry.szExeFile) == targetProcessName)
			pids.emplace_back(entry.th32ProcessID); // Names match, add to list
	} while (Process32NextW(snap, &entry)); // Keep going until end of snapshot
	CloseHandle(snap);
	return pids;
}

DWORD GetOwnParentPid() {
	DWORD myParentPid = NULL, myPid = GetCurrentProcessId();
	HANDLE snap = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0); // All processes
	PROCESSENTRY32W entry; // Current process
	entry.dwSize = sizeof entry;
	if (!Process32FirstW(snap, &entry)) // Start with the first in snapshot
		return NULL;
	do {
		if (entry.th32ProcessID == myPid) // This is the current process
			myParentPid = entry.th32ParentProcessID; // Names match, add to list
	} while (Process32NextW(snap, &entry)); // Keep going until end of snapshot
	CloseHandle(snap);
	return myParentPid;
}

DWORD FindServicePid(LPCTSTR ServiceName) {
	SC_HANDLE               ServiceManager;
	SC_HANDLE               Service;
	SERVICE_STATUS_PROCESS* SvcStatus;
	DWORD                   BytesNeeded;
	LPBYTE                  ByteBuffer[sizeof(SERVICE_STATUS_PROCESS)];
	DWORD                   ProcessId;

	ServiceManager = OpenSCManager(NULL, NULL, SC_MANAGER_ALL_ACCESS);

	if (!ServiceManager)
		return NULL;

	Service = OpenService(ServiceManager, ServiceName, SERVICE_QUERY_STATUS);

	if (!Service) {
		CloseServiceHandle(ServiceManager);
		return NULL;
	}

	SvcStatus = (SERVICE_STATUS_PROCESS*)ByteBuffer;

	if (!QueryServiceStatusEx(Service, SC_STATUS_PROCESS_INFO, (LPBYTE)SvcStatus, sizeof(ByteBuffer), &BytesNeeded)) {
		SvcStatus = (SERVICE_STATUS_PROCESS*)malloc(BytesNeeded);
		if (!QueryServiceStatusEx(Service, SC_STATUS_PROCESS_INFO, (LPBYTE)SvcStatus, BytesNeeded, &BytesNeeded)) {
			free(SvcStatus);
			CloseServiceHandle(Service);
			CloseServiceHandle(ServiceManager);
			return NULL;
		}
	}

	ProcessId = SvcStatus->dwProcessId;

	if (SvcStatus != (SERVICE_STATUS_PROCESS*)ByteBuffer)
		free(SvcStatus);

	CloseServiceHandle(Service);
	CloseServiceHandle(ServiceManager);

	return ProcessId;
}

// Attach to parent process
DWORD GetAutoParentPID(DWORD parentPID) {
	DWORD foundParentPID = NULL;

	// If using the system processes, getting the PID of the specified parents automatically
	if (parentPID == PARENT_LSASS) {
		/* Sort the PIDs increasingly, because there is normally only 1 instance of lsass.exe
		But if there are more (e.g. the user has another process named lsass.exe running)
		Then we will use the smallest PID since it should be the system one */
		std::vector<DWORD> pidsLsass = GetPIDs(PROCESS_NAME_LSASS);
		std::sort(pidsLsass.begin(), pidsLsass.end());
		if (!pidsLsass.empty())
			foundParentPID = pidsLsass[0];
	}
	if (parentPID == PARENT_CSRSS) {
		std::vector<DWORD> pidsCsrss = GetPIDs(PROCESS_NAME_CSRSS);
		std::sort(pidsCsrss.begin(), pidsCsrss.end());
		if (pidsCsrss.size() >= 2)
			foundParentPID = pidsCsrss[1];
	}
	if (parentPID == PARENT_PCASVC) {

		foundParentPID = FindServicePid(SERVICE_NAME_PCASVC);
	}

	return foundParentPID; 
}


BOOL SetRemoteHandleInformation(DWORD parentProcess, HANDLE handleID, DWORD dwMask, DWORD dwFlags) {
	BOOL status = FALSE;

	HANDLE hParentProcess = OpenProcess(PROCESS_CREATE_THREAD | PROCESS_QUERY_INFORMATION | PROCESS_VM_OPERATION | PROCESS_VM_WRITE | PROCESS_VM_READ, FALSE, parentProcess);
	if (hParentProcess == NULL)
		goto closehandle_exit;


	DWORD64 functionAddr = NULL;
	BOOL targetIsX64 = processIsX64(hParentProcess);
	BOOL sourceIsX64 = processIsX64();
	if (targetIsX64 == sourceIsX64) {
		
		functionAddr = (DWORD64)GetProcAddress(GetModuleHandle(TEXT("kernel32.dll")), SET_HANDLE_INFO_API_FUNC);
	}
	else {

		DWORD64 kernel32BaseInTarget = FindModuleBaseAddrInProcess(parentProcess, KERNEL32DLL); // Kernel32.dll base
		if (kernel32BaseInTarget == NULL)
			goto closehandle_exit; 

								  
		WCHAR winDir[MAX_PATH] = L"";
		UINT winDirPathLen = GetWindowsDirectoryW((LPWSTR)&winDir, MAX_PATH);
		std::wstring kernel32DllPath = winDir;
		if (processIsX64() == TRUE)	// x64 > x86
			kernel32DllPath += L"\\SysWOW64\\";  // Forcing search to x86 kernel32.dll
		else // x86 > x64
			kernel32DllPath += L"\\Sysnative\\"; // Cannot use System32, otherwise Windows sends automatically to SysWOW64
		kernel32DllPath += L"kernel32.dll";
		DWORD64 kernel32Base = GetRvaOfFunctionInDLL(kernel32DllPath, SET_HANDLE_INFO_API_FUNC);
		if (kernel32Base == NULL)
			goto closehandle_exit;

		functionAddr = kernel32Base + kernel32BaseInTarget;
	}

	// Raw shellcodes without addresses or values
	UCHAR shellcode_x86[] = {
		0x68, 0, 0, 0, 0,					// push dwFlags						offset +1
		0x68, 0, 0, 0, 0,					// push dwMask						offset +6
		0x68, 0, 0, 0, 0,					// push handleID					offset +11
		0xB8, 0, 0, 0, 0,					// mov eax, &SetHandleInformation	offset +16
		0xFF, 0xD0,							// call eax
		0xC3								// ret
											// TODO: Get the return in eax and mov it to the address we can read to get the BOOL returned
	};
	UCHAR shellcode_x64[] = {
		0x48, 0xB9, 0, 0, 0, 0, 0, 0, 0, 0, // mov rcx, handleID				offset +2
		0x48, 0xBA, 0, 0, 0, 0, 0, 0, 0, 0, // mov rdx, dwMask					offset +12
		0x49, 0xB8, 0, 0, 0, 0, 0, 0, 0, 0, // mov r8, dwFlags					offset +22
		0x48, 0xB8, 0, 0, 0, 0, 0, 0, 0, 0, // mov rax, &SetHandleInformation	offset +32
		0x48, 0x81, 0xEC, 0x18, 0, 0, 0,	// sub rsp, 0x18
		0xFF, 0xD0,							// call rax
		0x48, 0x81, 0xC4, 0x18, 0, 0, 0,	// add rsp, 0x18
		0xC3								// ret
											// TODO: Get the return in eax and mov it to the address we can read to get the BOOL returned
	};

	// Filling addresses and values, and parameters for writing and executing it
	SIZE_T shellcodeSize = 0;
	PUCHAR pShellcode = NULL;
	if (targetIsX64 == FALSE) { // x86
		*(ULONG*)((PUCHAR)shellcode_x86 + 1) = (ULONG)(ULONG_PTR)dwFlags;
		*(ULONG*)((PUCHAR)shellcode_x86 + 6) = (ULONG)(ULONG_PTR)dwMask;
		*(ULONG*)((PUCHAR)shellcode_x86 + 11) = (ULONG)(ULONG_PTR)handleID;
		*(ULONG*)((PUCHAR)shellcode_x86 + 16) = (ULONG)(ULONG_PTR)functionAddr;
		shellcodeSize = sizeof(shellcode_x86);
		pShellcode = (UCHAR*)&shellcode_x86;
	}
	if (targetIsX64 == TRUE) { // x64
		*(ULONG*)((PUCHAR)shellcode_x64 + 2) = (ULONG)(ULONG_PTR)handleID;
		*(ULONG*)((PUCHAR)shellcode_x64 + 12) = (ULONG)(ULONG_PTR)dwMask;
		*(UINT64*)((PUCHAR)shellcode_x64 + 22) = (UINT64)(PUINT64)dwFlags;
		*(UINT64*)((PUCHAR)shellcode_x64 + 32) = (UINT64)(PUINT64)functionAddr;
		shellcodeSize = sizeof(shellcode_x64);
		pShellcode = (UCHAR*)&shellcode_x64;
	}

	/* // For debug
	for (int i(0); i < shellcodeSize; ++i)
	printf("%X ", (BYTE)pShellcode[i]);
	*/

	// Pushing shellcode to parent process
	void* shellCodeAddr = VirtualAllocEx(hParentProcess, NULL, shellcodeSize, MEM_RESERVE | MEM_COMMIT, PAGE_EXECUTE_READWRITE);
	if (shellCodeAddr == nullptr)
		return FALSE;
	if (!WriteProcessMemory(hParentProcess, shellCodeAddr, pShellcode, shellcodeSize, NULL))
		goto virtualfree_exit;

	// Execution
	DWORD dwThreadID;
	HANDLE hThread = CreateRemoteThread(hParentProcess, NULL, 0, (LPTHREAD_START_ROUTINE)shellCodeAddr, NULL, 0, &dwThreadID);
	if (hThread == NULL)
		goto virtualfree_exit;
	WaitForSingleObject(hThread, INFINITE);
	CloseHandle(hThread);

	// TODO: Get the return value

	status = TRUE; // Success
virtualfree_exit:
	VirtualFreeEx(hParentProcess, shellCodeAddr, shellcodeSize, MEM_RELEASE);
closehandle_exit:
	CloseHandle(hParentProcess);
	return status;
}

BOOL processIsX64(HANDLE hProcess) {
	SYSTEM_INFO sysInfo;
	GetNativeSystemInfo(&sysInfo);
	WORD arch = sysInfo.wProcessorArchitecture;
	if (arch != PROCESSOR_ARCHITECTURE_AMD64 && arch != PROCESSOR_ARCHITECTURE_IA64)
		return FALSE; // Processor is not x64, processes cannot be x64

	if (hProcess == NULL) // If no process specified, checking own process
		hProcess = GetCurrentProcess();

	BOOL isX86 = FALSE;
	IsWow64Process(hProcess, &isX86);
	if (isX86)
		return FALSE;
	else
		return TRUE;
}

// Gets base address of specified module in process from PID, if no module given, returns process base address (x86 & x64)
DWORD64 FindModuleBaseAddrInProcess(DWORD targetPID, std::wstring moduleToFind) {
	HANDLE snapshotModules = CreateToolhelp32Snapshot(TH32CS_SNAPMODULE | TH32CS_SNAPMODULE32, targetPID);
	if (snapshotModules == INVALID_HANDLE_VALUE)
		return NULL;

	MODULEENTRY32 me32;
	me32.dwSize = sizeof(MODULEENTRY32); // Set the size of the structure before using it.

	if (!Module32First(snapshotModules, &me32)) {
		CloseHandle(snapshotModules);
		return 0x0;
	}

	// For Case insensitive search
	std::wstring moduleToFindUp = moduleToFind;
	std::transform(moduleToFindUp.begin(), moduleToFindUp.end(), moduleToFindUp.begin(), ::towupper);

	DWORD64 baseAddr = NULL;
	do {
		if (moduleToFind == L"") { // No module specified, returning process base address
			baseAddr = (DWORD64)me32.modBaseAddr;
			break;
		}
		// For Case insensitive search
		std::wstring moduleName = me32.szModule;
		std::wstring moduleNameUp = moduleName;
		std::transform(moduleNameUp.begin(), moduleNameUp.end(), moduleNameUp.begin(), ::towupper);
		if (moduleNameUp == moduleToFindUp) {
			baseAddr = (DWORD64)me32.modBaseAddr;
			break;
		}
	} while (Module32Next(snapshotModules, &me32));

	CloseHandle(snapshotModules);
	return baseAddr;
}

// Gets the relative virtual address of a function by its name in a DLL, supports x64 & x86 DLLs
DWORD64 GetRvaOfFunctionInDLL(std::wstring dllFile, std::string functionName) {
	if (dllFile.empty() || functionName.empty())
		return NULL;

	// Mapping DLL file into memory for analysis
	HANDLE libFile = CreateFile(dllFile.c_str(), GENERIC_READ, FILE_SHARE_READ, NULL, OPEN_EXISTING, FILE_ATTRIBUTE_SYSTEM, NULL);
	if (libFile == INVALID_HANDLE_VALUE || libFile == NULL)
		return 0x0;
	HANDLE libMapping = CreateFileMapping(libFile, NULL, PAGE_READONLY | SEC_IMAGE, NULL, NULL, NULL);
	if (libMapping == INVALID_HANDLE_VALUE || libMapping == NULL)
		goto exit_closeFile;
	LPVOID lib = MapViewOfFile(libMapping, FILE_MAP_READ, NULL, NULL, NULL);
	if (lib == NULL)
		goto exit_closeMapping;

	// Determining if DLL is x86 or x64
	BOOL dllIsX64 = TRUE;
	PIMAGE_NT_HEADERS headerNoArch = ImageNtHeader(lib); // Note: Only valid until first misalignment between 64 & 32 struct
	if (headerNoArch->FileHeader.Machine == IMAGE_FILE_MACHINE_I386)
		dllIsX64 = FALSE;

	// Getting headers and pointer to export directory
	LPVOID header = NULL;
	PIMAGE_EXPORT_DIRECTORY exports = NULL;
	if (dllIsX64 == TRUE) {
		header = (PIMAGE_NT_HEADERS64)ImageNtHeader(lib);
		if (((PIMAGE_NT_HEADERS64)header)->Signature != IMAGE_NT_SIGNATURE || ((PIMAGE_NT_HEADERS64)header)->OptionalHeader.NumberOfRvaAndSizes == 0)
			goto exit_unmapFile;
		exports = (PIMAGE_EXPORT_DIRECTORY)((DWORD64)lib + (DWORD64)((PIMAGE_NT_HEADERS64)header)->OptionalHeader.DataDirectory[IMAGE_DIRECTORY_ENTRY_EXPORT].VirtualAddress);
	}
	else {
		header = (PIMAGE_NT_HEADERS32)ImageNtHeader(lib);
		if (((PIMAGE_NT_HEADERS32)header)->Signature != IMAGE_NT_SIGNATURE || ((PIMAGE_NT_HEADERS32)header)->OptionalHeader.NumberOfRvaAndSizes == 0)
			goto exit_unmapFile;
		exports = (PIMAGE_EXPORT_DIRECTORY)((DWORD64)lib + (DWORD64)((PIMAGE_NT_HEADERS32)header)->OptionalHeader.DataDirectory[IMAGE_DIRECTORY_ENTRY_EXPORT].VirtualAddress);
	}
	if (exports->AddressOfNames == 0 || (exports->NumberOfFunctions != exports->NumberOfNames))
		goto exit_unmapFile; // TODO: Currently doesn't support DLLs with functions exportable only by ordinals or forwarded exports

							 // Iterating through exports to find function
	DWORD64 addr = 0x0;
	DWORD* exportNames = (DWORD*)((DWORD64)lib + exports->AddressOfNames);
	DWORD* exportAddresses = (DWORD*)((DWORD64)lib + exports->AddressOfFunctions);
	for (int i = 0; i < exports->NumberOfNames; i++) {
		std::string name = (char*)((DWORD64)lib + (DWORD)exportNames[i]);
		if (dllIsX64 == TRUE)
			addr = (DWORD64)exportAddresses[i];
		else
			addr = (DWORD64)exportAddresses[i + exports->Base];
		if (name == functionName)
			break;
	}

	// Cleanup
exit_unmapFile:
	UnmapViewOfFile(lib);
exit_closeMapping:
	CloseHandle(libMapping);
exit_closeFile:
	CloseHandle(libFile);

	return addr;
}