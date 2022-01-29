#ifndef GAME_H
#define GAME_H

#include "MainMenuState.h"

class Game
{
private:
	//Poles
	sf::RenderWindow *window;
	sf::Event sfEvent;
	
	sf::Clock dtClock;
	float dt;

	std::stack<State*> states;
	std::map<std::string, int> supportedKeys;

	//Initialization
	void initWindow();
	void initStates();
	void initKeys();

public:
	//Constructor/Destructor
	Game();
	virtual ~Game();

	//Methods

		//Regular
	void endApplication();

		//Update
	void updateDt();
	void updateSFMLEvents();
	void update();
		//Render
	void render();
		//Core
	void run();
};

#endif // !GAME_H