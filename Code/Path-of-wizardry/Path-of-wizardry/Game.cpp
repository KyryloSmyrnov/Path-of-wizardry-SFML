#include "Game.h"

//Static mathods

//Initializer methods
void Game::initWindow()
{
	//Create window using config
	std::ifstream ifs("Config/config.ini");

	std::string title = "Path of Wizardry";
	sf::VideoMode window_bounds(1280,720);
	unsigned framerate_limit = 60;
	bool vertical_sync_enabled = false;

	if (ifs.is_open())
	{
		std::getline(ifs, title);
		ifs >> window_bounds.width >> window_bounds.height;
		ifs >> framerate_limit;
		ifs >> vertical_sync_enabled;
	}

	ifs.close();

	this->window = new sf::RenderWindow(window_bounds, title);
	this->window->setFramerateLimit(framerate_limit);
	this->window->setVerticalSyncEnabled(vertical_sync_enabled);
}

//Contructor/Destructor
Game::Game()
{
	this->initWindow();
}

Game::~Game()
{
	delete this->window;
}

//Methods

void Game::updateDt()
{
	//Update delta time with the time it takes to update and render one frame
	this->dt = this->dtClock.restart().asSeconds();
}

void Game::updateSFMLEvents()
{
	while (this->window->pollEvent(this->sfEvent))
	{
		if (this->sfEvent.type == sf::Event::Closed)
		{
			this->window->close();
		}
	}
}

void Game::update()
{
	this->updateSFMLEvents();
}

void Game::render()
{
	this->window->clear();

	//Render items

	this->window->display();
}

void Game::run()
{
	while (this->window->isOpen())
	{
		this->updateDt();
		this->update();
		this->render();
	}
}
