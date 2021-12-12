#pragma once
#include <string>
#include <vector>
class board
{
public:
    std::vector<std::vector<unsigned char>> BoardArray;
    std::vector<std::vector<unsigned char>> LandedArray;
	const std::string colorarray[8] = { "30", "31", "32", "33", "34", "35", "35", "37" };
    int Points;
	board();
	void DrawBoard();
    void CheckForTetris();
    bool CheckForGameOver();
};

