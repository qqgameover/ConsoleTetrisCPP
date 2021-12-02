#include "piece.h"

piece::piece(position position, ::position direction)
{
	this -> position_ = position;
	this -> direction_ = direction;
}
piece::piece() = default;



