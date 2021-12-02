#pragma once
#include <vector>
#include "board.h"
#include "position.h"

using namespace std;

class piece
{
	vector<vector<unsigned char>> blockMatrix;
	static vector<vector<unsigned char>> getRandomBlockMatrix();
public:
	position position_;
	position direction_;
	piece();
	void moveBlock(board &gameBoards);
	void rotateBlock(vector<vector<unsigned char>> &blockMatrix);
};

