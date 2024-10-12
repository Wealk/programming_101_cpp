#ifndef ADVENTURER__H
#define ADVENTURER__H

#include "Entity.h"

class Adventurer : Entity {
public:
	Adventurer(DungeonPosition pos) : Entity(pos) {

	}

	void changeFloor() {
		if (position.floor == 0) position.floor++;
		else position.floor--;
	}
};

#endif