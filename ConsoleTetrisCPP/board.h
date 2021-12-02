#pragma once
#include <vector>
using namespace std;
class board
{
public:
	vector<vector<unsigned char>> BoardArray;
	vector<vector<unsigned char>> LandedArray;
	board();
	void drawBoard();
};

