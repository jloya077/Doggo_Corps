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
	bool jumpReset = 0;

	Doggo(float x, float y, float w, float h);

	void gravity();
	void jump();
	//void walk(bool dir);	// 0 is left, 1 is right

	float getY() const { return y; }
};

#endif
