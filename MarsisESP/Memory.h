#include <SystemIncludes.h>

class CMem
{
public:
	CMem() : hProcess(nullptr), hModule(nullptr), lpBase(nullptr)
	{

	}
	CMem(HANDLE hProc) : hProcess(hProc), hModule(nullptr), lpBase(nullptr)
	{
		HMODULE hMods[512];
		DWORD cb;
		DWORD flag;
		if (EnumProcessModulesEx(hProc, hMods, sizeof(hMods), &cb, LIST_MODULES_ALL))
		{
			char szModName[MAX_PATH] = { NULL };
			for (int i = 0; i < cb / sizeof(HMODULE); i++)
			{
				if (GetModuleBaseNameA(hProc, hMods[i], szModName, MAX_PATH))
				{
					if (!strcmp(szModName, "TslGame.exe"))
					{
					///	std::cout << hMods[i] << " : " << szModName << std::endl;
						lpBase = hMods[i];
						//std::cout << "Base Address: 0x" << (DWORD64)lpBase << std::endl;
						//std::cout << "HProc: 0x" << (HANDLE)hProcess << std::endl;
						__HWNDTslp = FindWindow(NULL, L"PLAYERUNKNOWN'S BATTLEGROUNDS ");
						
						GetWindowRect(FindWindowA(NULL, "PLAYERUNKNOWN'S BATTLEGROUNDS "), &m_Rectp);
					 
						break;
					}
				}
				ZeroMemory(szModName, MAX_PATH);
			}
		}
	}

	DWORD_PTR GetBase()
	{
		return (DWORD_PTR)lpBase;
	}

	HANDLE GetHandle()
	{
		return hProcess;
	}

	HWND GetHwnd()
	{
		return __HWNDTslp;
	}
	 
	RECT GetRect()
	{
		return m_Rectp;
	}


	template<typename T> T RPM(SIZE_T address, DWORD bufSize)
	{
		T buff;
		ReadProcessMemory(hProcess, (LPCVOID)address, &buff, bufSize, NULL);
		return buff;
	}
	template<typename T> T WPM(SIZE_T address, DWORD bufSize)
	{
		T buff;
		WriteProcessMemory(hProcess, (LPCVOID)address, &buff, bufSize, NULL);
		return buff;
	}
	BOOL RPMWSTR(SIZE_T address, wchar_t* buff, DWORD bufSize)
	{
		return ReadProcessMemory(hProcess, (LPCVOID)address, buff, bufSize, NULL);
	}
	void Close()
	{
		CloseHandle(hProcess);
	}

private:
	HANDLE hProcess;
	HMODULE hModule;
	LPVOID lpBase;
	HWND __HWNDTslp;
	RECT m_Rectp;

};
  
extern CMem* mem;