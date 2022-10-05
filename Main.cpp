#include <iostream>

#include <SFML/Graphics.hpp>

#include "Engine.h"
#include "Events.h"

#include "Shadow.h"
#include "Room.h"
#include "Player.h"

int main() {

	Engine* engine = new Engine(384, 384, "Don't Blink");
	Events* events = new Events(); 

	Shadow* shadow = new Shadow(384, 384);

	Room* room = new Room(1);

	Player* player = new Player();

	while (engine->getWindow().isOpen()) {

		events->update(engine->getWindow(), player);
		shadow->lightArea(player);
		player->move();

		engine->getWindow().clear();

		engine->getWindow().draw(room->getSprite());
		engine->getWindow().draw(shadow->getSprite());
		engine->getWindow().draw(player->getSprite());

		engine->getWindow().display();

	}

	delete player; 
	delete room;
	delete shadow; 
	delete events; 
	delete engine; 

	return 0;

}