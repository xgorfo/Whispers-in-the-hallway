#ifndef GAME_H
#define GAME_H

#include "State.h"

using namespace sf;



class Game
{
private:
	//Variables
	RenderWindow *window;
	Event sfEvent;

	Clock frameClock;
	float frame;

	stack<State*> states;

	//Initialized functions

	void initWindow();
	void initStates();


public:

	Game();
	virtual ~Game();

	//Functions

	void updateframe();
	void updateSMFLEvents();
	void update();
	void render();
	void run();
	
};

#endif

