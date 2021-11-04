#include <iostream>
#include <conio.h>
#include "Menu.h"
#include "Maze.h"
using namespace std;


char** maze1;
int size1;
Player player = { 1, 1, char(43) };

void Maze::input() {
	cin >> size1;
}

void Maze::generatemaze() {
	size1 *= 2 + 1;
	maze1 = new char* [size1];
	for (int i = 0; i < size1; i++) {
		maze1[i] = new char[size1];
	}

	for (int i = 0; i < size1; i++) {
		for (int j = 0; j < size1; j++) {
			maze1[i][j] = char(254);
		}
	}
}

void Maze::displaymaze() {
	for (int i = 0; i < size1; i++) {
		for (int j = 0; j < size1; j++) {
			cout << maze1[i][j] << " ";
		}
		cout << endl;
	}
}

void Maze::movement() {
	for (int i = 0;;) {
		system("CLS");
		displaymaze();
		switch (_getch()) {
		case KEY_RIGHT:
			player.x++;
		case KEY_UP:
			player.y--;
		case KEY_DOWN:
			player.y++;
		case KEY_LEFT:
			player.x--;
		}
	}
}






