#include "Engine.h"

Engine::Engine(int width, int height, std::string title) {

	window.create(sf::VideoMode(width, height), title);

	window.setFramerateLimit(30);

}

sf::RenderWindow &Engine::getWindow() {

	return window; 

}