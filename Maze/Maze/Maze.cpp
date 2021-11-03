#include <iostream>
#include <conio.h>
#include "Menu.h"
#include "Maze.h"
using namespace std;

struct Player {
	int x;
	int y;
	char player;
};




char** maze1;
void Maze::maze(int size) {
	size *= 2 + 1;
	int r = rand() % size;
	maze1 = new char* [size];
	for (int i = 0; i < size; i++) {
		maze1[i] = new char[size];
	}

	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			maze1[i][j] = char(254);
		}
	}

	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			maze1[r][r] = ' ';
		}
	}

	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			cout << maze1[i][j] << " ";
		}
		cout << endl;
	}
}





