#pragma once
#include "board.h"
#include "position.h"
#include "piece.h"
#include "colDetection.h"
class game
{
public:
	board Board;
	piece CurrentPiece;
	colDetection ColDetection;
	game();
	void PieceLogic();
	void GameplayLoop();
};

