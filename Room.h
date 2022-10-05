#pragma once

#ifndef ROOM_H
#define ROOM_H

#include <iostream>
#include <string>

#include <SFML/Graphics.hpp>

class Room
{

public:

	Room(int roomNumber);

	sf::Texture& getTexture();
	sf::Sprite& getSprite();

private:

	sf::Texture texture; 

	sf::Sprite sprite;

};

#endif 