#ifndef STATE_H //These directives are intended only for compatibility with
// previous versions of the language.
#define STATE_H

#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Network.hpp>

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


	

public:
	State();
	virtual ~State();

	virtual void update() = 0;
	virtual void render() = 0;
};

#endif

