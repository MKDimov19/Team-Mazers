#include <iostream>
#include <conio.h>
#include "Menu.h"
#include "Maze.h"
using namespace std;

const char WIDTH = 8, HEIGHT = 8;
Player player{ 1, 1, char(158) };

char action;

unsigned char maze1[WIDTH][HEIGHT] = {
    '#', '#', '#', '#', '#', '#','#', '#',
    '#', ' ', ' ', '#', ' ', ' ',' ', '#',
    '#', '#', ' ', '#', ' ', '#',' ', '#',
    '#', ' ', ' ', '#', '#', '#',' ', '#',
    '#', ' ', '#', '#', '#', ' ',' ', '#',
    '#', ' ', '#', ' ', ' ', ' ','#', '#',
    '#', ' ', ' ', ' ', '#', ' ',' ', '#',
    '#', '#', '#', '#', '#', '#',' ', '#',
};

unsigned char currentMaze[WIDTH][HEIGHT];

void Maze::updateMap()
{
    for (int i = 0; i < HEIGHT; i++) {
        for (int u = 0; u < WIDTH; u++) {
            currentMaze[u][i] = maze1[u][i];
        }
    }
    currentMaze[player.x][player.y] = player.player;

    for (int i = 0; i < HEIGHT; i++) {
        cout << endl;
        for (int u = 0; u < WIDTH; u++) {
            cout << currentMaze[u][i] << " ";
        }
    }
    if (currentMaze[player.x][player.y] == currentMaze[7][6]) {
        system("CLS");
        cout << "You win!" "\n";
        player.x = 1;
        player.y = 1;
        goback();
    }
}

void Maze::movement() {
    

    for (;;) {
        system("CLS");
        Maze::updateMap();
        action = _getch();
        switch (action) {

        case KEY_DOWN:
            if (currentMaze[player.x][player.y + 1] != '#') {
                player.y++;
            }
            break;

        case KEY_UP:
            if (currentMaze[player.x][player.y - 1] != '#') {
                player.y--;
            }
            break;

        case KEY_LEFT:
            if (currentMaze[player.x - 1][player.y] != '#') {
                player.x--;
            }
            break;

        case KEY_RIGHT:
            if (currentMaze[player.x + 1][player.y] != '#') {
                player.x++;
            }
            break;
        }
    }
}















//#define WIDTH 8
//#define HEIGHT 8
//
//unsigned char map1[WIDTH][HEIGHT] = {
//	'#', '#', '#', '#', '#', '#','#', '#',
//	'#', ' ', ' ', '#', ' ', ' ',' ', '#',
//	'#', '#', ' ', '#', ' ', '#',' ', '#',
//	'#', ' ', ' ', '#', '#', '#',' ', '#',
//	'#', ' ', '#', '#', '#', ' ',' ', '#',
//	'#', ' ', '#', ' ', ' ', ' ','#', '#',
//	'#', ' ', ' ', ' ', '#', ' ',' ', '#',
//	'#', '#', '#', '#', '#', '#','#', '#',
//};
//
//
//unsigned char maze1[WIDTH][HEIGHT];	
////int size1;
//int playerx = 1, playery = 1;
//const char player = char(43);
//
////void maze::input() {
////	cin >> size1;
////}
////
////void maze::generatemaze() {
////	size1 *= 2 + 1;
////	maze1 = new char* [size1];
////	for (int i = 0; i < size1; i++) {
////		maze1[i] = new char[size1];
////	}
////
////	for (int i = 0; i < size1; i++) {
////		for (int j = 0; j < size1; j++) {
////			maze1[i][j] = char(254);
////		}
////	}
////}
//
//void Maze::displaymaze() {
//	for (int i = 0; i < WIDTH; i++) {
//		for (int j = 0; j < HEIGHT; j++) {
//			maze1[i][j] = map1[i][j];
//		}
//	}
//	maze1[playerx][playery] = player;
//	for (int i = 0; i < WIDTH; i++) {
//		for (int j = 0; j < HEIGHT; j++) {
//			cout << maze1[i][j] << " ";
//		}
//		cout << endl;
//	}
//}
//
//void Maze::movement() { 
//	Maze::displaymaze();
//	for (int i = 0;;) {
//		char key = _getch();
//		switch (key) {
//		case KEY_RIGHT:
//			if (maze1[playerx + 1][playery] != '#') {
//				playerx++;
//			}
//		case KEY_UP:
//			if (maze1[playerx][playery - 1] != '#') {
//				playery--;
//			}
//		case KEY_DOWN:
//			if (maze1[playerx][playery + 1] != '#') {
//				playery++;
//			}
//		case KEY_LEFT:
//			if (maze1[playerx - 1][playery] != '#') {
//				playerx--;
//			}
//		}
//		system("CLS");
//		Maze::displaymaze();
//	}
//}






