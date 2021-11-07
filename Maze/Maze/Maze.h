#pragma once
class Maze {
public:
	void movement();
	void updatemap();
};

struct Player 
{
	int x;
	int y;
	char player;
};