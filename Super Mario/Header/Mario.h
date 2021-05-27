#pragma once

#include <SFML/Graphics.hpp>
#include "../Header/DEFINITION.h"
using namespace sf;

// Make enum for mario state
typedef enum { SMALL, BIG, SUPER } marioState_t;

class Mario
{	
	// Mario properties
private:
	Clock timer1, timer2;
	float marioAcceleration[2], marioSpeed[2];
	bool goRight, goUp, goLeft, goDown, jumping;
	float startJumpPosition;

public:
	Texture marioTexture;
	Sprite marioSprite;
	marioState_t marioState;
	
	
	// Constractor
	Mario();

	// set Mario to small state
	void smallState();

	// set Mario to Big state
	void bigState();

	// Move mario
	void move();

	void catchEvents(Event& event);

private:
	// Make animation for mario while walking
	void setMarioRectForWalk(IntRect& intRect);

	// Make mario animation stand still 
	void standStill();

	// make mario jump
	void jump(IntRect& intRect, int RectPosition, float waiting);

	// make mario walk to the right
	void moveRight(IntRect& intRect);

	// make mario walk to the left
	void moveLeft(IntRect& intRect);
};

