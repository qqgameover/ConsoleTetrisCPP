#pragma once
#include "position.h"
class piece
{
	position position_;
	position direction_;
public:
	piece(position position, ::position direction);
	piece();
	void moveBlock();
	void rotateBlock();
};

