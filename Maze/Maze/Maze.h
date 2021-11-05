#pragma once
class Maze {
public:
	void movement();
	void updateMap();
};

struct Player {
	int x;
	int y;
	char player;
};