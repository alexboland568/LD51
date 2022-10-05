#include "Events.h"

sf::Event& Events::getEvent() {

	return e; 

}

void Events::update(sf::Window& window, Player* player) {

	while (window.pollEvent(e)) {

		if (e.type == sf::Event::Closed) {

			window.close();

		}

		if (e.type == sf::Event::KeyPressed) {

			if (e.key.code == sf::Keyboard::D)
				player->keyState("d", "pressed");
			if (e.key.code == sf::Keyboard::A)
				player->keyState("a", "pressed");
			if (e.key.code == sf::Keyboard::W)
				player->keyState("w", "pressed");
			if (e.key.code == sf::Keyboard::S)
				player->keyState("s", "pressed");

		}

		if (e.type == sf::Event::KeyReleased) {

			if (e.key.code == sf::Keyboard::D)
				player->keyState("d", "released");
			if (e.key.code == sf::Keyboard::A)
				player->keyState("a", "released");
			if (e.key.code == sf::Keyboard::W)
				player->keyState("w", "released");
			if (e.key.code == sf::Keyboard::S)
				player->keyState("s", "released");

		}

	}

}