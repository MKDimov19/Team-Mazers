#include <iostream>
#include <conio.h>
#include "menu.h"
#include "maze.h"

using namespace std;




const char WIDTH = 8, HEIGHT = 8;
Player player{ 1, 1, char(248) };
char action;

char tutorialMaze[WIDTH][HEIGHT] =
{
	char(254),  char(254),  char(254),  char(254),  char(254),  char(254), char(254),  char(254),
	char(254), ' ', ' ', 'x', ' ', ' ',' ',  char(254),
	char(254),  char(254), ' ',  char(254), ' ',  char(254),' ',  char(254),
	char(254), ' ', ' ',  char(254),  char(254),  char(254),' ',  char(254),
	char(254), ' ',  char(254),  char(254),  char(254), ' ',' ',  char(254),
	char(254), ' ',  char(254), ' ', ' ', ' ', char(254),  char(254),
	char(254), ' ', ' ', ' ',  char(254), ' ',' ',  char(254),
	char(254),  char(254),  char(254),  char(254),  char(254),  char(254),' ',  char(254),
};

unsigned char currentMaze[WIDTH][HEIGHT];

void Maze::updatemap()
{
	cout << " _____      _             _       _" "\n";
	cout << "|_   _|   _| |_ ___  _ __(_) __ _| |" "\n";
	cout << "  | || | | | __/ _ \\| '__| |/ _` | |" "\n";
	cout << "  | || |_| | || (_) | |  | | (_| | |" "\n";
	cout << "  |_| \\__,_|\\__\\___/|_|  |_|\\__,_|_|" "\n";
	cout << "\n";

	for (int i = 0; i < HEIGHT; i++)
	{
		for (int j = 0; j < WIDTH; j++)
		{
			currentMaze[j][i] = tutorialMaze[j][i];
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

	cout << "\n" "x - Trap" "\n";
	cout << player.player << " - Your character" "\n";
}

void Maze::movement()
{
	for (int i = 0;;)
	{
		system("CLS");
		Maze::updatemap();
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

//level1
const char WIDTH_L1 = 10, HEIGHT_L1 = 10;
unsigned char currentMaze1[WIDTH_L1][HEIGHT_L1];

char level1[WIDTH_L1][HEIGHT_L1] =
{
	char(254),  char(254),  char(254),  char(254),  char(254),  char(254), char(254),  char(254),  char(254),  char(254),
	char(254),  ' ',  ' ',  ' ',  ' ',  char(254), ' ',  ' ',  ' ',  char(254),
	char(254),  char(254),  char(254),  char(254),  ' ',  'x', ' ',  char(254),  char(254),  char(254),
	char(254),  ' ',  char(254),  ' ',  ' ',  char(254), ' ',  char(254),  ' ',  char(254),
	char(254),  ' ',  ' ',  ' ',  ' ',  char(254), ' ',  char(254),  ' ',  char(254),
	char(254),  char(254),  char(254),  ' ',  ' ',  ' ', ' ',  ' ',  ' ',  char(254),
	char(254),  ' ',  ' ',  ' ',  char(254),  char(254), ' ',  ' ',  ' ',  char(254),
	char(254),  char(254),  ' ',  char(254),  ' ',  ' ', ' ',  char(254),  'x',  char(254),
	char(254),  ' ',  ' ',  ' ',  ' ',  char(254), ' ',  ' ',  ' ',  char(254),
	char(254),  char(254),  char(254),  char(254),  char(254),  char(254), char(254),  char(254),  ' ',  char(254),
};

void Level1::updatemap1()
{
	cout << "  _                   _   _" "\n";
	cout << " | |    _____   _____| | / |" "\n";
	cout << " | |   / _ \\ \\ / / _ \\ | | |" "\n";
	cout << " | |__|  __/\\ V /  __/ | | |" "\n";
	cout << " |_____\\___| \\_/ \\___|_| |_|" "\n";
	cout << "\n";

	for (int i = 0; i < HEIGHT_L1; i++)
	{
		for (int j = 0; j < WIDTH_L1; j++)
		{
			currentMaze1[j][i] = level1[j][i];
		}
	}
	currentMaze1[player.x][player.y] = player.player;

	for (int i = 0; i < HEIGHT_L1; i++)
	{
		for (int j = 0; j < WIDTH_L1; j++)
		{
			cout << currentMaze1[j][i] << " ";
		}
		cout << endl;
	}
	if (currentMaze1[player.x][player.y] == currentMaze1[2][5] or currentMaze1[player.x][player.y] == currentMaze1[7][8])
	{
		system("CLS");
		cout << "You lose!" "\n";
		player.x = 1;
		player.y = 1;
		goback();
	}
	if (currentMaze1[player.x][player.y] == currentMaze1[9][8])
	{
		system("CLS");
		cout << "You win!" "\n";
		player.x = 1;
		player.y = 1;
		goback();
	}

	cout << "\n" "x - Trap" "\n";
	cout << player.player << " - Your character" "\n";
}

void Level1::movement1()
{
	for (int i = 0;;)
	{
		system("CLS");
		Level1::updatemap1();
		action = _getch();
		switch (action)
		{

		case KEY_DOWN:
			if (currentMaze1[player.x][player.y + 1] != unsigned char(254))
			{
				player.y++;
			}
			break;

		case KEY_UP:
			if (currentMaze1[player.x][player.y - 1] != unsigned char(254))
			{
				player.y--;
			}
			break;

		case KEY_LEFT:
			if (currentMaze1[player.x - 1][player.y] != unsigned char(254))
			{
				player.x--;
			}
			break;

		case KEY_RIGHT:
			if (currentMaze1[player.x + 1][player.y] != unsigned char(254))
			{
				player.x++;
			}
			break;
		}
	}
}


//Level 2

const char WIDTH_L2 = 20, HEIGHT_L2 = 20;
unsigned char currentMaze2[WIDTH_L2][HEIGHT_L2];

char level2[WIDTH_L2][HEIGHT_L2] =
{
	char(254),  char(254),  char(254),  char(254),  char(254),  char(254), char(254),  char(254),  char(254),  char(254),char(254),  char(254),  char(254),  char(254),  char(254),  char(254), char(254),  char(254),  char(254),  char(254),
	char(254),  ' ',  char(254),  ' ',  ' ',  char(254), ' ',  ' ',  char(254),  char(254),char(254),  ' ',  ' ',  char(254),  char(254),  ' ', ' ',  char(254),  ' ',  char(254),
	char(254),  ' ',  char(254),  char(254),  ' ',  char(254), char(254),  ' ',  ' ',  char(254),' ', ' ', ' ',  char(254),  ' ', ' ', char(254),  char(254),  ' ',  char(254),
	char(254),  ' ',  ' ',  ' ',  ' ',  char(254), char(254),  ' ',  ' ',  ' ',' ',  ' ',  char(254),  char(254),  ' ',  ' ', ' ',  ' ',  ' ',  char(254),
	char(254),  char(254),  char(254),  ' ',  ' ',  ' ', ' ',  ' ',  char(254),  char(254),' ', ' ', ' ',  char(254),' ', ' ', char(254), ' ', ' ',  char(254),
	char(254),  ' ',  ' ',  ' ',  char(254),  ' ', char(254),  char(254),  char(254),  ' ', ' ',  char(254),  ' ',  ' ',  ' ',  char(254), char(254),  char(254),  ' ',  char(254),
	char(254),  ' ',  char(254),  char(254),  char(254),  ' ', char(254), ' ',  ' ',  ' ', char(254),  char(254),  ' ',  'x',  ' ',  char(254), ' ',  ' ',  ' ',  char(254),
	char(254),  ' ',  char(254),  ' ',  char(254),  char(254), char(254),  ' ',  ' ',  char(254),char(254),  char(254),  ' ',  ' ',  ' ',  char(254), char(254),  char(254),  char(254),  char(254),
	char(254),  ' ',  ' ',  ' ',  ' ',  char(254), ' ',  ' ',  ' ',  ' ',' ',  ' ',  ' ',  char(254),  ' ',  ' ', char(254),  char(254),  ' ',  char(254),
	char(254),  ' ',  char(254),  char(254),  char(254),  char(254), char(254),  'x',  char(254), ' ',char(254),  char(254),  char(254),  char(254),  char(254),  ' ', ' ',  ' ',  ' ',  char(254),
	char(254),  ' ',  char(254),  ' ',  char(254),  ' ', ' ', ' ',  char(254), ' ',' ',  char(254), ' ',  ' ', ' ',  ' ', char(254),  char(254),  char(254),  char(254),
	char(254),  ' ',  char(254),  ' ',  char(254),  char(254), char(254),  ' ',  char(254),  ' ', ' ',  char(254),  ' ',  char(254),  ' ',  ' ', 'x',  ' ',  ' ',  char(254),
	char(254),  ' ',  ' ',  ' ',  char(254),  ' ', ' ',  ' ',  ' ',  ' ',' ',  ' ',  ' ',  char(254),  char(254),  char(254), char(254),  ' ',  ' ',  char(254),
	char(254),  char(254),  char(254),  ' ',  'x',  ' ', ' ',  ' ',  char(254),  ' ',char(254),  char(254),  char(254),  char(254),  ' ',  ' ', ' ',  ' ',  ' ',  char(254),
	char(254),  ' ',  ' ',  ' ',  char(254),  char(254), ' ',  ' ',  char(254),  ' ',' ',  ' ',  ' ',  ' ',  ' ',  char(254), char(254),  char(254),  ' ',  char(254),
	char(254),  ' ',  char(254),  char(254),  ' ',  ' ', ' ',  ' ',  char(254),  ' ',' ',  char(254),  char(254),  char(254),  char(254),  char(254), ' ',  ' ',  ' ',  char(254),
	char(254),  ' ',  ' ',  ' ',  ' ',  char(254), char(254),  ' ',  ' ', ' ',' ', ' ',  ' ',  char(254),  ' ',  ' ',' ',  char(254),  char(254),  char(254),
	char(254),  ' ',  ' ',  char(254),  char(254),  char(254), char(254),  ' ',  ' ',  char(254),char(254),  ' ',  ' ',  char(254),  ' ',  ' ', ' ',  ' ',  ' ',  char(254),
	char(254),  char(254),  ' ', ' ', ' ',  ' ', char(254), ' ',  ' ',  char(254),' ', ' ',  ' ',  char(254),  ' ',  char(254), char(254),  char(254),  'G',  char(254),
	char(254),  char(254),  char(254),  char(254),  char(254),  char(254), char(254),  char(254),  char(254),  char(254),char(254),  char(254),  char(254),  char(254),  char(254),  char(254), char(254),  char(254),  char(254),  char(254),
};

void Level2::updatemap2()
{
	cout << "  _                   _   _" "\n";
	cout << " | |    _____   _____| | / |" "\n";
	cout << " | |   / _ \\ \\ / / _ \\ | | |" "\n";
	cout << " | |__|  __/\\ V /  __/ | | |" "\n";
	cout << " |_____\\___| \\_/ \\___|_| |_|" "\n";
	cout << "\n";

	for (int i = 0; i < HEIGHT_L2; i++)
	{
		for (int j = 0; j < WIDTH_L2; j++)
		{
			currentMaze2[j][i] = level2[j][i];
		}
	}
	currentMaze2[player.x][player.y] = player.player;

	for (int i = 0; i < HEIGHT_L2; i++)
	{
		for (int j = 0; j < WIDTH_L2; j++)
		{
			cout << currentMaze2[j][i] << " ";
		}
		cout << endl;
	}
	if (currentMaze2[player.x][player.y] == currentMaze2[13][4] or currentMaze2[player.x][player.y] == currentMaze2[9][7] or currentMaze2[player.x][player.y] == currentMaze2[6][13] or currentMaze2[player.x][player.y] == currentMaze2[11][16])
	{
		system("CLS");
		cout << "You lose!" "\n";
		player.x = 1;
		player.y = 1;
		goback();
	}
	if (currentMaze2[player.x][player.y] == currentMaze2[18][18])
	{
		system("CLS");
		cout << "You win!" "\n";
		player.x = 1;
		player.y = 1;
		goback();
	}

	cout << "\n" "x - Trap" "\n";
	cout << player.player << " - Your character" "\n";
}

void Level2::movement2()
{
	for (int i = 0;;)
	{
		system("CLS");
		Level2::updatemap2();
		action = _getch();
		switch (action)
		{

		case KEY_DOWN:
			if (currentMaze2[player.x][player.y + 1] != unsigned char(254))
			{
				player.y++;
			}
			break;

		case KEY_UP:
			if (currentMaze2[player.x][player.y - 1] != unsigned char(254))
			{
				player.y--;
			}
			break;

		case KEY_LEFT:
			if (currentMaze2[player.x - 1][player.y] != unsigned char(254))
			{
				player.x--;
			}
			break;

		case KEY_RIGHT:
			if (currentMaze2[player.x + 1][player.y] != unsigned char(254))
			{
				player.x++;
			}
			break;
		}
	}
}


