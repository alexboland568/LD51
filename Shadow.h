#pragma once

#ifndef SHADOW_H
#define SHADOW_H

#include <iostream>

#include <SFML/Graphics.hpp>

#include "Player.h"

class Shadow
{

public:

	Shadow(int displayWidth, int displayHeight);

	void lightArea(Player* player);

	sf::Image& getImage();

	sf::Texture& getTexture();

	sf::Sprite& getSprite();
	
private:

	sf::Image image;

	sf::Texture texture;
	
	sf::Sprite sprite; 

};


#endif 