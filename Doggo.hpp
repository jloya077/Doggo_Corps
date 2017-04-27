#ifndef DOGGO_HPP
#define DOGGO_HPP

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
	short int jumpCount = 0;

	Doggo(float x, float y, float w, float h);
	void updateVals(float x, float y, float w, float h); // move this to correct subclass
	void gravity();
	void jump(float y_shift);
	int move(float a);
	float getY() const { return y; }
	float getX() const { return x; }
	void draw() {
		glEnable(GL_TEXTURE_2D);
		glTexEnvf(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_MODULATE);

		glBegin(GL_QUADS);

		glTexCoord2f(0.0, 0.0);
		glVertex2f(x, y - h);

		glTexCoord2f(0.0, 1.0);
		glVertex2f(x, y);

		glTexCoord2f(1.0, 1.0);
		glVertex2f(x + w, y);

		glTexCoord2f(1.0, 0.0);
		glVertex2f(x + w, y - h);

		glEnd();

		glDisable(GL_TEXTURE_2D);
	}
};

#endif
