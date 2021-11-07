#include <iostream>
#include <conio.h>
#include "menu.h"
#include "maze.h"

using namespace std;

const char WIDTH = 8, HEIGHT = 8;
Player player{ 1, 1, char(248) };
char action;

 char maze1[WIDTH][HEIGHT] = 
 {
     char(254),  char(254),  char(254),  char(254),  char(254),  char(254), char(254),  char(254),
     char(254), ' ', ' ', '#', ' ', ' ',' ',  char(254),
     char(254),  char(254), ' ',  char(254), ' ',  char(254),' ',  char(254),
     char(254), ' ', ' ',  char(254),  char(254),  char(254),' ',  char(254),
     char(254), ' ',  char(254),  char(254),  char(254), ' ',' ',  char(254),
     char(254), ' ',  char(254), ' ', ' ', ' ', char(254),  char(254),
     char(254), ' ', ' ', ' ',  char(254), ' ',' ',  char(254),
     char(254),  char(254),  char(254),  char(254),  char(254),  char(254),' ',  char(254),
};

unsigned char currentMaze[WIDTH][HEIGHT];

void Maze::updateMap()
{
    cout << "You are playing the tutorial" "\n" "\n";
    for (int i = 0; i < HEIGHT; i++) 
    {
        for (int j = 0; j < WIDTH; j++) 
        {
            currentMaze[j][i] = maze1[j][i];
        }
    }
    currentMaze[player.x][player.y] = player.player;

    for (int i = 0; i < HEIGHT; i++) 
    {
        for (int j = 0; j < WIDTH; j++) 
        {
            cout << currentMaze[j][i] << " ";
        }
        cout << endl;
    }
    if (currentMaze[player.x][player.y] == currentMaze[1][3]) 
    {
        system("CLS");
        cout << "You lose!" "\n";
        player.x = 1;
        player.y = 1;
        goback();
    }
    if (currentMaze[player.x][player.y] == currentMaze[7][6]) 
    {
        system("CLS");
        cout << "You win!" "\n";
        player.x = 1;
        player.y = 1;
        goback();
    }

    cout << "\n" "# - Trap" "\n" << endl;
    cout << char(248) << " - Your character" "\n";
}

void Maze::movement()
{
    for (;;) 
    {
        system("CLS");
        Maze::updateMap();
        action = _getch();
        switch (action) 
        {

        case KEY_DOWN:
            if (currentMaze[player.x][player.y + 1] != unsigned char(254)) 
            {
                player.y++;
            }
            break;

        case KEY_UP:
            if (currentMaze[player.x][player.y - 1] != unsigned char(254)) 
            {
                player.y--;
            }
            break;

        case KEY_LEFT:
            if (currentMaze[player.x - 1][player.y] != unsigned char(254)) 
            {
                player.x--;
            }
            break;

        case KEY_RIGHT:
            if (currentMaze[player.x + 1][player.y] != unsigned char(254)) 
            {
                player.x++;
            }
            break;
        }
    }
}






