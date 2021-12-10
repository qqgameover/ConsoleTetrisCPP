#pragma once
#include <vector>
#include "piece.h"
#include "position.h"

class colDetection
{
public:
	bool IsColliding(std::vector<std::vector<unsigned char>>& landedArray, piece &piece, position dir);
};
