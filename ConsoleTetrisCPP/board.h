#pragma once
#include <vector>
class board
{
public:
    std::vector<std::vector<unsigned char>> BoardArray;
    std::vector<std::vector<unsigned char>> LandedArray;
	board();
	void DrawBoard();
};

