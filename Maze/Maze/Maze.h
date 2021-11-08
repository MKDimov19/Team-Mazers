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

class Level2 {
public:
	void movement2();
	void updatemap2();
};

class Level3 {
public:
	void movement3();
	void updatemap3();
};

struct Player 
{
	int x;
	int y;
	char player;
};

