#pragma once

#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <Windows.h>
#include <Psapi.h>
#include <iostream>
#include <string>
#include <thread>
#include <chrono>
#include <functional>
#include <vector>
#include <list>  
#include <math.h> 
#include <d3d9.h>
#include <d3dx9.h>
#include <sstream>  
#pragma comment(lib, "d3d9.lib")
#pragma comment(lib, "d3dx9.lib") 
#include <dwmapi.h>
#pragma comment(lib, "dwmapi.lib")
#define M_PI	3.14159265358979323846264338327950288419716939937510
using namespace std;


int s_width = 1360;
int s_height = 786;

#define CENTERX (GetSystemMetrics(SM_CXSCREEN)/2)-(s_width/2)
#define CENTERY (GetSystemMetrics(SM_CYSCREEN)/2)-(s_height/2)
extern IDirect3D9Ex* d3d;    // the pointer to our Direct3D interface.
extern IDirect3DDevice9Ex* d3ddev;
extern HWND hWnd;
extern HWND twnd;
extern MARGINS  margin;
extern LPD3DXFONT pFont;
extern ID3DXLine* d3dLine;
LRESULT CALLBACK WindowProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam);
void DrawString(int x, int y, DWORD color, LPD3DXFONT g_pFont, const char *fmt, ...);
void DrawCircleLine(float x, float y, float xx, float yy, D3DCOLOR color);
void DrawLine(float x, float y, float xx, float yy, D3DCOLOR color);

void DrawBox(float x, float y, float width, float height, D3DCOLOR color);
void DrawHealthBar(float x, float y, float w, float h, int r, int g);
void DrawHealthBarBack(float x, float y, float w, float h);
void FillRGB(float x, float y, float w, float h, int r, int g, int b, int a);

void initD3D(HWND hWnd);
int render();


void RandomBaslik()
{
	srand(time(0));
	string str = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	string newstr;
	int pos;
	while (newstr.size() != 15) {
		pos = ((rand() % (str.size() - 1)));
		newstr += str.substr(pos, 1);
	}
	 
	std::stringstream Ism;
	Ism << (string)newstr;
	char * IsmInfo = new char[Ism.str().size() + 1];
	strcpy(IsmInfo, Ism.str().c_str());


	SetConsoleTitleA(IsmInfo);
}
