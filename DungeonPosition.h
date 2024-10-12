#ifndef DUNGEON_POSITION__H
#define DUNGEON_POSITION__H

struct DungeonPosition {
public:
	int floor;
	int x;
	int y;

	DungeonPosition(int floor, int x, int y) {
		this->floor = floor;
		this->x = x;
		this->y = y;
	}

	bool operator == (const DungeonPosition& c) const {
		return c.floor == floor && c.x == x && c.y == y;
	}
};

#endif