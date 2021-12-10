#pragma once
#include "board.h"
#include "position.h"
#include "piece.h"
class game
{
public:
	board board;
	piece currentPiece;
	game();
	void PieceLogic();
	void GameplayLoop();
};

