#pragma once
#include <string>
#include <vector>
#include <array>
class board
{
public:
    std::vector<std::vector<unsigned char>> BoardArray;
    std::vector<std::vector<unsigned char>> LandedArray;
    std::array<std::string, 8> colorarray = { "30", "31", "32", "33", "34", "35", "35", "37" };
    std::array<int, 4> PointArray = {40, 100, 300, 1200};
    int Points;
	board();
	void DrawBoard();
    void CheckForTetris();
    bool CheckForGameOver();
};

