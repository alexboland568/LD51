#include "Shadow.h"

Shadow::Shadow(int displayWidth, int displayHeight) {

	image.create(1024, 512, sf::Color::Black);

	if (!texture.loadFromImage(image)) {

		std::cout << "Couldn't load Shadow texture!" << std::endl;

	}

	sprite.setTexture(texture);

}

void Shadow::lightArea(Player* player) {

	// Dimensions of light box 
	int newW = player->getW() * 2;
	int newH = player->getH() * 2;
	int newX = player->getX() - player->getW() / 2;
	int newY = player->getY() - player->getH() / 2;

	for (int i = 0; i < newW; i++) {

		for (int j = 0; j < newH; j++) {

			// Light makes shadow texture area transparent 
			image.setPixel(newX + i, newY + j, sf::Color::Transparent);

		}

	}

	for (int i = 0; i < 1024; i++) {

		for (int j = 0; j < 512; j++) {

			// If pixels are not within light range, make them black 
			if (!(newX < i + 1 && newX + newW > i && newY < j + 1 && newY + newH > j)) {

				image.setPixel(i, j, sf::Color::Black);

			}

		}

	}

	texture.loadFromImage(image);

	sprite.setTexture(texture);

}

sf::Image& Shadow::getImage() {

	return image;

}

sf::Texture& Shadow::getTexture() {

	return texture; 

}

sf::Sprite& Shadow::getSprite() {

	return sprite; 

}