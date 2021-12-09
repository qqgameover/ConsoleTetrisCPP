#include "piece.h"
#include <random>
piece::piece()
{
	position_ = position(1, 5);
	direction_ = position(1, 0);
	blockMatrix = getRandomBlockMatrix();
}

void piece::moveBlock(board &gameBoards)
{
	const int height = blockMatrix.size();
	const int width = blockMatrix[0].size();
	for (int y_index = 0; y_index < height; y_index++)
	for (int x_index = 0; x_index < width; x_index++)
	{
		if (blockMatrix[y_index][x_index] == 0) continue;
		gameBoards.BoardArray[y_index + position_.y][x_index + position_.x] = blockMatrix[y_index][x_index];
	}
}
vector<vector<unsigned char>> piece::getRandomBlockMatrix()
{
	int num = rand() % 7;
	return { {2, 2}, {2, 2} };
}



