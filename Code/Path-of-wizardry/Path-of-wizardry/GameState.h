#ifndef GAMESTATE_H
#define GAMESTATE_H



#include "State.h"


class GameState :
    public State
{
private:
    Entity player;

    //Methods

    void initKeybinds();

public:
    //Constructor/Destructor
    GameState(sf::RenderWindow* window, std::map<std::string, int>* supportedKeys);
    virtual ~GameState();

    //Methods

    void endState();
    void updateInput(const float& dt);
    void render(sf::RenderTarget* target = NULL);
    void update(const float& dt);

};

#endif // !GAMESTATE_H