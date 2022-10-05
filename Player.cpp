#include "Player.h"

Player::Player() {

	image.create(32, 32, sf::Color::White);

	if (!texture.loadFromImage(image)) {

		std::cout << "Couldn't load Player texture!" << std::endl;

	}

	sprite.setTexture(texture);

	x = 100;
	y = 100; 
	w = 32; 
	h = 32; 

	right = false;
	left = false;
	up = false;
	down = false; 

	vel = 2; 


}

void Player::keyState(std::string key, std::string state) {

	if (key == "d") {

		if (state == "pressed")
			right = true;
		else if (state == "released")
			right = false; 

	}

	if (key == "a") {

		if (state == "pressed")
			left = true; 
		else if (state == "released")
			left = false;

	}

	if (key == "w") {

		if (state == "pressed")
			up = true;
		else if (state == "released")
			up = false;

	}

	if (key == "s") {

		if (state == "pressed")
			down = true;
		else if (state == "released")
			down = false;

	}
	
}

void Player::move() {

	if (right)
		x += vel; 
	if (left)
		x -= vel; 
	if (up)
		y -= vel; 
	if (down)
		y += vel; 

	sprite.setPosition(sf::Vector2f(x, y));

}

sf::Image& Player::getImage() {

	return image; 

}

sf::Texture& Player::getTexture() {

	return texture; 

}

sf::Sprite& Player::getSprite() {

	return sprite; 

}

int Player::getX() {

	return x; 

}

int Player::getY() {

	return y; 

}

int Player::getW() {

	return w; 

}

int Player::getH() {

	return h;

}