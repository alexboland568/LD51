#pragma once

#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include <string>

#include <SFML/Graphics.hpp>

class Player
{

public:

	Player();

	void keyState(std::string key, std::string state);
	void move();

	sf::Image& getImage();

	sf::Texture& getTexture();

	sf::Sprite& getSprite();

	int getX();
	int getY();
	int getW();
	int getH();

private:

	sf::Image image;

	sf::Texture texture;

	sf::Sprite sprite; 

	int x, y, w, h; 

	bool right, left, up, down; 

	int vel;

};

#endif 