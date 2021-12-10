#include "game.h"
#include <Windows.h>
#include <iostream>
#include <thread>
#include <vector>
#define WAITTIME 250ms

game::game()
{
	GameplayLoop();
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

void game::PieceLogic()
{
	CurrentPiece.UnDrawBlock(Board);
	CurrentPiece.MoveBlock(position(1, 0));
	bool x = ColDetection.IsColliding(Board.LandedArray, CurrentPiece, position(1, 0));
	CurrentPiece.DrawBlock(Board);
	if (x) CurrentPiece = piece();
}

[[noreturn]]void game::GameplayLoop()
{
	set_cursor(false);
	while (true)
	{
		setCursorPosition(0, 0);
		PieceLogic();
		Board.DrawBoard();
		std::this_thread::sleep_for(WAITTIME);
	}
}
