#include "Doggo.h"

Doggo::Doggo(float x, float y, float w, float h)
{
	this->x = x;
	this->y = y;
	this->w = w;
	this->h = h;
	updateVals(x, y, w, h);
}

void Doggo::gravity(float y_shift)
{
	y -= y_shift;

	if (y < -0.55)
		y += 0.05f;

	updateVals(x, y, w, h);
}

void Doggo::jump(float y_shift)
{
	y += y_shift;

	updateVals(x, y, w, h);
}