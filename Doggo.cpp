#include "Doggo.h"
#define MAX_JUMP_SPEED 0.2f
#define MAX_WALK_SPEED 0.2f

Doggo::Doggo(float x, float y, float w, float h)
{
	this->x = x;
	this->y = y;
	this->w = w;
	this->h = h;
	updateVals(x, y, w, h);

	xMult = 0.0;
	yMult = MAX_JUMP_SPEED;
}

void Doggo::gravity()
{
	y -= 0.05f;

	if (y < -0.5f)
	{
		if (jumpReset)
		{
			jumpReset = 0;
			yMult = MAX_JUMP_SPEED;
		}

		y = -0.5;
	}

	updateVals(x, y, w, h);
}

void Doggo::jump()
{
	y += yMult;
	yMult *= 0.86;
	
	updateVals(x, y, w, h);
}

//void Doggo::walk(bool dir)
//{
//	if (xMult < MAX_WALK_SPEED)
//		xMult += (MAX_WALK_SPEED * 0.1);
//	else
//		xMult = MAX_WALK_SPEED;
//
//	if (dir)
//		x += xMult;
//	else
//		x -= xMult;
//
//}

