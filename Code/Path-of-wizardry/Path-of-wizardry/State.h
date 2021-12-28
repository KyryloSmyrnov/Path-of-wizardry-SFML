#ifndef STATE_H
#define STATE_H

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <fstream>
#include <sstream>

#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Network.hpp>

class State
{
private:
	//Poles
	std::vector<sf::Texture> textures;


public:
	State();
	virtual ~State();

	//Methods
	virtual void update() = 0;
	virtual void render() = 0;
};

#endif // !STATE_H
