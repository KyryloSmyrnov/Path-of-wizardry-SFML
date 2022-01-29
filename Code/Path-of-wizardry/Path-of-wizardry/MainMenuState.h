#ifndef MAINMENUSTATE_H
#define MAINMENUSTATE_H

#include "GameState.h"
#include "Button.h"

class MainMenuState :
    public State

{
private:
    //Poles
    sf::RectangleShape background;
    sf::Font font;

    //Methods
    void initFonts();
    void initKeybinds();

public:
    //Constructor/Destructor
    MainMenuState(sf::RenderWindow* window, std::map<std::string, int>* supportedKeys);
    virtual ~MainMenuState();

    //Methods

    void endState();
    void updateInput(const float& dt);
    void render(sf::RenderTarget* target = NULL);
    void update(const float& dt);

};

#endif