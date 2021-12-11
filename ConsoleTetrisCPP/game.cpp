#include "game.h"
#include <Windows.h>
#include <iostream>
#include <thread>
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
    position currentDir = Controls.HandleInput(CurrentPiece);
	CurrentPiece.MoveBlock(currentDir, Board.LandedArray);
	bool hasCollided = ColDetection.IsColliding(Board.LandedArray, CurrentPiece, position(1, 0));
	CurrentPiece.DrawBlock(Board);
	if (hasCollided)
	{
		CurrentPiece = piece();
		Board.LandedArray = Board.BoardArray;
	}
}

void game::GameplayLoop()
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
