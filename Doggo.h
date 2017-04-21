#pragma once
#ifndef DOGGO_H
#define DOGGO_H

#include "TexRect.hpp"

class Doggo : public TexRect
{
	float x, xMult;
	float y, yMult;
	float w;
	float h;

public:
	bool isJumping = 0;

	Doggo(float x, float y, float w, float h);

	void gravity();
	void jump(float y_shift);

	float getY() const { return y; }
};

#endif
