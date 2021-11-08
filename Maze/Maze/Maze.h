#pragma once
class Maze {
public:
	void movement();
	void updatemap();
};

class Level1 {
public:
	void movement1();
	void updatemap1();
};

struct Player 
{
	int x;
	int y;
	char player;
};

