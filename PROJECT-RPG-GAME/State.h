#ifndef STATE_H //These directives are intended only for compatibility with
// previous versions of the language.
#define STATE_H

#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Network.hpp>
#include "Game.h"

#include <windows.h>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>
#include <stack>
#include <map>


using namespace std;

class State {

private:
	sf::RenderWindow* window;
		std::vector<sf::Texture> textures;


public:
	State(sf::RenderWindow* window) {}
	virtual ~State() {}

	virtual void endState() = 0;

	virtual void update(const float& frame) = 0;
	virtual void render() = 0;
};

#endif

