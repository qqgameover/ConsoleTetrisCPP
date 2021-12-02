#include "game.h"
#include <Windows.h>
#include <iostream>
#include <thread>
#include <vector>
game::game()
{
	gameplayLoop();
}

void setCursorPosition(int x, int y)
{
	static const HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD coord = { (SHORT)x, (SHORT)y };
	SetConsoleCursorPosition(hOut, coord);
}
void set_cursor(bool visible) {
	CONSOLE_CURSOR_INFO info;
	info.dwSize = 100;
	info.bVisible = visible;
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &info);
}

void game::gameplayLoop()
{
	set_cursor(false);
	while (true)
	{
		setCursorPosition(0, 0);
		currentPiece.moveBlock(board);
		board.drawBoard();
		std::this_thread::sleep_for(100ms);
	}
}
