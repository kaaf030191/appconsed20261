#ifndef HELPER_CPP
#define HELPER_CPP

#include <windows.h>

#include "Helper.h"

void Helper::gotoxy(int x, int y) {
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD pos = { (SHORT)x, (SHORT)y };
	
	SetConsoleCursorPosition(hConsole, pos);
}

#endif
