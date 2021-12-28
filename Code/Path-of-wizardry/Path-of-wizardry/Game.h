#ifndef GAME_H
#define GAME_H

#include "State.h"

class Game
{
private:
	//Poles
	sf::RenderWindow *window;
	sf::Event sfEvent;
	
	sf::Clock dtClock;
	float dt;

	//Initialization
	void initWindow();

public:
	//Constructor/Destructor
	Game();
	virtual ~Game();

	//Methods
	void updateDt();
	void updateSFMLEvents();
	void update();
	void render();
	void run();
};

#endif // !GAME_H