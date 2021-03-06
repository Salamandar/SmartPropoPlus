// SppTopWin.h
#ifdef SPPTOPWIN_EXPORTS
#define SPPTOPWIN_API __declspec(dllexport)
#else
#define SPPTOPWIN_API __declspec(dllimport)
#endif

#pragma once

#include "resource.h"
#define MAX_LOADSTRING 100

HWND SPPTOPWIN_API GetTopUiWnd(void);

int SPPTOPWIN_API MyEntryPoint(_In_ HINSTANCE hInstance,
                     _In_opt_ HINSTANCE hPrevInstance,
                     _In_ LPTSTR    lpCmdLine,
                     _In_ int       nCmdShow,
					 _In_opt_ HWND		hTopAppWnd);

