#pragma once
#include <vector>
#include "board.h"
#include "position.h"
#include <memory>

using namespace std;

class piece
{
    static vector<vector<unsigned char>> GetRandomBlockMatrix();
    public:
    std::unique_ptr<position> Position;
    vector<vector<unsigned char>> blockMatrix;
    piece();
    void MoveBlock(position dir, std::vector<std::vector<unsigned char>> landedArray);
    void UnDrawBlock(board &gameBoards);
    void DrawBlock(board &gameBoards);
    static void RotateBlock(std::vector<std::vector<unsigned char>> &outBlockMatrix);
    bool IsSidesColliding(std::vector<std::vector<unsigned char>> landedArray, position dir);
};

