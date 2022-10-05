#include "Room.h"

Room::Room(int roomNumber) {

	std::string path = "Assets/Rooms/Room" + std::to_string(roomNumber) + ".png";

	if (!texture.loadFromFile(path)) {

		std::cout << "Couldn't load room texture!" << std::endl; 

	}

	texture.setSmooth(true);

	sprite.setTexture(texture);

	//sprite.set

}

sf::Texture& Room::getTexture() {

	return texture; 

}

sf::Sprite& Room::getSprite() {

	return sprite; 

}