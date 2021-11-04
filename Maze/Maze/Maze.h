#pragma once
class Maze {
public:
	void generatemaze();
	void movement();
	void input();
	void displaymaze();
};

struct Player {
	int x;
	int y;
	char player;
};