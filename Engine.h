#pragma once

#ifndef ENGINE_H
#define ENGINE_H

#include <iostream>
#include <string>

#include <SFML/Graphics.hpp>

class Engine
{

public:

	Engine(int width, int height, std::string title);

	sf::RenderWindow &getWindow();

private:

	sf::RenderWindow window; 

};

#endif 