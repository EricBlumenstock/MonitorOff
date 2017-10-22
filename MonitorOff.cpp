#include "stdafx.h"
#include "windows.h"

int main()
{
	SendMessage(HWND_BROADCAST, WM_SYSCOMMAND, SC_MONITORPOWER, 2);
    return 0;
}

