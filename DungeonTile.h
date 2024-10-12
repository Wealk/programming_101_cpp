#ifndef DUNGEON_TILE__H
#define DUNGEON_TILE__H

#include "DungeonPosition.h"
#include "DungeonTileType.h"
#include "PrintTools.h"

class DungeonTile {
public:
	DungeonTile(DungeonPosition pos) : position(pos) {
		type = DungeonTileType::Empty;
	}

	DungeonPosition getPosition() {
		return position;
	}

	DungeonTileType getType() {
		return type;
	}

	void changeType(DungeonTileType newType) {
		type = newType;
	}

	void printTile() {
		switch (type) {
			case DungeonTileType::Empty:
				PrintTools::write("x", Color::LightGray);
				break;
			case DungeonTileType::Stair:
				PrintTools::write("m", Color::LightGreen);
				break;
			case DungeonTileType::Treasure:
				PrintTools::write("▣", Color::LightYellow);
				break;
			default:
				break;
		}
	}

private:
	DungeonPosition position;
	DungeonTileType type;
};

#endif