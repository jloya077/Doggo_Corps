#include "Doggo.h"
#define MAX_JUMP_SPEED 0.25

Doggo::Doggo(float x, float y, float w, float h)
{
	this->x = x;
	this->y = y;
	this->w = w;
	this->h = h;
	updateVals(x, y, w, h);

	yMult = MAX_JUMP_SPEED;
}

void Doggo::gravity()
{
	y -= 0.05f;

	if (y < -0.55f)
	{
		if (jumpReset)
		{
			jumpReset = 0;
			yMult = MAX_JUMP_SPEED;
		}

		y += 0.05f;
	}

	updateVals(x, y, w, h);
}

void Doggo::jump()
{
	y += yMult;
	yMult *= 0.9;
	
	updateVals(x, y, w, h);
}