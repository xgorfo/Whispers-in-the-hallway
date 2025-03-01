#ifndef GAME_H
#define GAME_H

#include "GameState.h"
#include "State.h"
#include <stack>

using namespace sf;

class Game
{
private:
	//Variables
	sf::RenderWindow *window;
	Event sfEvent;

	Clock frameClock;
	float frame;

	std::stack<State*> states;

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

