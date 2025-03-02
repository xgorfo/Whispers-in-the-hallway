
#include "GameState.h"
using namespace sf;


GameState::GameState(RenderWindow* window)
	: State(window) {

}
GameState::~GameState() {

}
void GameState::update(const float& frame){
	cout << "Hello pipidaster" << "\n";
}

void GameState::render() {

}

void GameState::endState() {

}