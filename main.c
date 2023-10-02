#include <windows.h>

/* The 'main' function of Win32 GUI programs: this is where execution starts */
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	ShellExecute(NULL, "open", "python", "C:\\priv\\nmx179\\nmx_main.py", "C:\\priv\\nmx179\\", nCmdShow);
	return 0;	
}
