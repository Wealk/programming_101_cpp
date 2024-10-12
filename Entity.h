#ifndef ENTITY__H
#define ENTITY__H

#include "DungeonPosition.h"
#include "DirectionType.h"

class Entity {
public:
	Entity(DungeonPosition pos) : position(pos) {

	}

	DungeonPosition getPosition() {
		return position;
	}

	void move(DirectionType direction) {
		switch (direction) {
			case DirectionType::North:
				position.y--;
				break;
			case DirectionType::East:
				position.x++;
				break;
			case DirectionType::South:
				position.y++;
				break;
			case DirectionType::West:
				position.x--;
				break;
			default:
				break;
		}
	}

protected:
	DungeonPosition position;

};

#endif