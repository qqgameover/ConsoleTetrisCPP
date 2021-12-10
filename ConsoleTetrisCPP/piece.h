#pragma once
#include <vector>
#include "board.h"
#include "position.h"

using namespace std;

class piece
{
	vector<vector<unsigned char>> blockMatrix;
	static vector<vector<unsigned char>> GetRandomBlockMatrix();
public:
	position *Position;
	piece();
	void MoveBlock(position dir);
	void UnDrawBlock(board &gameBoards);
	void DrawBlock(board &gameBoards);
	void RotateBlock(vector<vector<unsigned char>> &blockMatrix);
};

