#ifndef ENEMY__H
#define ENEMY__H

#include <stdlib.h>
#include <vector>
#include "Entity.h"

class Enemy : Entity {
public:
	Enemy(DungeonPosition pos) : Entity(pos) {

	}

	void move(std::vector<DirectionType> availableDirections) {
		if (availableDirections.size() > 0)
			Entity::move(availableDirections[rand() % availableDirections.size()]);
	}
};

#endif