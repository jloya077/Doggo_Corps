#include "Block.h"

Block::Block(float x, float y, float w, float h)
{
	this->x = x;
	this->y = y;
	this->w = w;
	this->h = h;
}

bool Block::contains(float obj1, float obj2)
{
	if (obj1 > obj2)
		return true;
	else
		return false;
}

