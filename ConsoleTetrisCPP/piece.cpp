#include "piece.h"
#include <iostream>
#include <random>
piece::piece()
{
	Position = new position(0, 5);
	blockMatrix = GetRandomBlockMatrix();
}

void piece::DrawBlock(board &gameBoards)
{
	const size_t height = blockMatrix.size();
	const size_t width = blockMatrix[0].size();
	for (size_t yIndex = 0; yIndex < height; yIndex++)
	for (size_t xIndex = 0; xIndex < width; xIndex++)
	{
		if (blockMatrix[yIndex][xIndex] == 0) continue;
		gameBoards.BoardArray[yIndex + Position->y][xIndex + Position->x] = blockMatrix[yIndex][xIndex];
	}
}
void piece::UnDrawBlock(board &gameBoards)
{
	const size_t height = blockMatrix.size();
	const size_t width = blockMatrix[0].size();
	for (size_t yIndex = 0; yIndex < height; yIndex++)
	for (size_t xIndex = 0; xIndex < width; xIndex++)
	{
		if (gameBoards.LandedArray[yIndex + Position->y][xIndex + Position->x] > 0) continue;
		gameBoards.BoardArray[yIndex + Position->y][xIndex + Position->x] = 0;
	}
}

void piece::MoveBlock(position dir)
{
	Position->y += dir.y;
	Position->x += dir.x;
}

vector<vector<unsigned char>> piece::GetRandomBlockMatrix()
{
	int num = rand() % 7;
	return { {2, 2}, {2, 2} };
}