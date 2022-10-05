#pragma once

#ifndef EVENTS_H
#define EVENTS_H

#include <SFML/Graphics.hpp>

#include "Player.h"

class Events
{

public:

	sf::Event& getEvent();

	void update(sf::Window& window, Player* player);

private:

	sf::Event e;

};

#endif 