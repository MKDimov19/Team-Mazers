#include <iostream>
#include <conio.h>
#include <windows.h>
#include "menu.h"
#include "maze.h"

using namespace std;
int counter = 1;

void options()
{
	menu();
	cout << endl;
	cout << "Current selection " << counter << endl;
	char key;
	for (int i = 0;;)
	{
		key = _getch();

		if (key == KEY_UP && (counter >= 2 && counter <= 4))
		{
			system("CLS");
			menu();
			counter--;
			cout << endl;
			cout << "Current selection " << counter << endl;
		} 

		if (key == KEY_DOWN && (counter >= 1 && counter <= 3))
		{
			system("CLS");
			menu();
			counter++;
			cout << endl;
			cout << "Current selection " << counter << endl;
		}

		if (key == '\r')
		{
			if (counter == 1)
			{
				system("CLS");
				gameOptions();
				break;
			}

			else if (counter == 2)
			{
				counter = 1;
				system("CLS");
				rules();
				goback();
				break;
			}

			else if (counter == 3)
			{
				counter = 1;
				system("CLS");
				info();
				goback();
				break;
			}

			else if (counter == 4)
			{
				counter = 1;
				system("CLS");
				cout << "Exited the program successfully." << endl;
				exit(0);
			}
		}
	}
}

void gameOptions()
{
	gameOptionsMenu();
	Maze reference;
	
	cout << endl;
	cout << "Current selection " << counter << endl;
	char key;
	for (int i = 0;;)
	{
		key = _getch();

		if (key == KEY_UP && (counter >= 2 && counter <= 4))
		{
			system("CLS");
			gameOptionsMenu();
			counter--;
			cout << endl;
			cout << "Current selection " << counter << endl;
		}

		if (key == KEY_DOWN && (counter >= 1 && counter <= 3))
		{
			system("CLS");
			gameOptionsMenu();
			counter++;
			cout << endl;
			cout << "Current selection " << counter << endl;
		}

		if (key == '\r')
		{
			if (counter == 1)
			{
				system("CLS");
				gameLevels();
				break;
			}

			else if (counter == 2)
			{
				counter = 1;
				system("CLS");
				cout << "In development!" "\n" "\n";
				goback();
				break;
			}

			else if (counter == 3)
			{
				counter = 1;
				system("CLS");
				reference.movement();
				goback();
				counter = 1;
				break;
			}

			else if (counter == 4)
			{
				counter = 1;
				system("CLS");
				options();
			}
		}
	}

}

void gameLevels()
{
	gameLevelsMenu();
	Level1 game;
	Level2 game2;
	Level3 game3;
	cout << endl;
	cout << "Current selection " << counter << endl;
	char key;
	for (int i = 0;;)
	{
		key = _getch();

		if (key == KEY_UP && (counter >= 2 && counter <= 4))
		{
			system("CLS");
			gameLevelsMenu();
			counter--;
			cout << endl;
			cout << "Current selection " << counter << endl;
		}

		if (key == KEY_DOWN && (counter >= 1 && counter <= 3))
		{
			system("CLS");
			gameLevelsMenu();
			counter++;
			cout << endl;
			cout << "Current selection " << counter << endl;
		}

		if (key == '\r')
		{
			if (counter == 1)
			{
				system("CLS");
				game.movement1();
				goback();
				counter = 1;
				break;
			}

			else if (counter == 2)
			{
				counter = 1;
				system("CLS");
				game2.movement2();
				goback();
				counter = 1;
				break;
			}

			else if (counter == 3)
			{
				counter = 1;
				system("CLS");
				game3.movement3();
				goback();
				
			}

			else if (counter == 4)
			{
				counter = 1;
				system("CLS");
				options();
			}
		}
	}
}

void gameLevelsMenu()
{
	system("CLS");
	cout << "  _                   _" "\n";
	cout << " | |    _____   _____| |___" "\n";
	cout << " | |   / _ \\ \\ / / _ \\ / __|" "\n";
	cout << " | |__|  __/\\ V /  __/ \\__ \\" "\n";
	cout << " |_____\\___| \\_/ \\___|_|___/" "\n";
	cout << "\n";
	cout << "1. Level 1" << endl;
	cout << "2. Level 2" << endl;
	cout << "3. Level 3" << endl;
	cout << "4. Go back to the menu" << endl << endl;
	cout << "You can navigate using the arrow keys" << endl;
}

void gameOptionsMenu()
{
	system("CLS");
	cout << "  ____                           ___         _   _" "\n";
	cout << " / ___|   __ _ _ __ ___   ___   / _ \\  _ __ | |_(_) ___  _ __  ___" "\n";
	cout << " | |  _  / _` | '_ ` _ \\ / _ \\  | | | | '_ \\| __| |/ _ \\| '_ \\/ __|" "\n";
	cout << " | |_| |  (_| | | | | | |  __/  | |_| | |_) | |_| | (_) | | | \\__ \\" "\n";
	cout << " \\_____| \\__,_|_| |_| |_|\\___|  \\___/ | .__/ \\__|_|\\___/|_| |_|___/" "\n";
	cout << "                                      |_|" "\n";
	cout << "1. Levels" << endl;
	cout << "2. Random generated maze" << endl;
	cout << "3. Tutorial" << endl;
	cout << "4. Go back to the menu" << endl << endl;
	cout << "You can navigate using the arrow keys" << endl;
}


void menu()
{
	system("CLS");
	cout << " _______                             __  __                                   " << endl;
	cout << "|__   __|                           |  \\/  |                                  " << endl;
	cout << "   | |   ___    __ _   _ __ ___     | \\  / |   __ _   ____   ___   _ __   ___ " << endl;
	cout << "   | |  / _ \\  / _` | | '_ ` _` \\   | |\\/| |  / _` | |_  /  / _ \\ | '__| / __|" << endl;
	cout << "   | | |  __/ | (_| | | | | | | |   | |  | | | (_| |  / /  |  __/ | |    \\__ \\ " << endl;
	cout << "   |_|  \\___|  \\__,_| |_| |_| |_|   |_|  |_|  \\__,_| /___|  \\___| |_|    |___/" << endl << endl;

	cout << "1. Play" << endl;
	cout << "2. Rules" << endl;
	cout << "3. Developers" << endl;
	cout << "4. Exit" << endl << endl;
	cout << "You can navigate using the arrow keys" << endl;
}

void info()
{
	system("CLS");
	cout << "Maksimiliyan Dimov - Scrum Trainer" << endl;
	cout << "     Georgi Ivanov - Quality Assurance Engineer" << endl;
	cout << "Georgi Trendafilov - Front-End Developer" << endl;
	cout << "   Georgi Hrisimov - Back-End Developer" << endl;
	cout << endl;
}

void rules()
{
	cout << "Rules" << endl;
}

void goback() {
	string choice;
	cout << "Do you want to return to the menu?" << endl;
	cout << "Yes/No" << endl;
	cin >> choice;

	if (choice == "yes" or choice == "Yes")
	{
		system("CLS");
		options();
	}
	else if (choice == "No" or choice == "no")
	{
		cout << "You go there anyway!" << endl;
		Sleep(1000);
		options();
	}
	else
	{
		string save;
		for (bool i = 1; i;)
		{
			system("CLS");
			cout << "Incorrect input" << endl;
			cout << "Do you want to return to the menu?" << endl;
			cout << "Yes/No" << endl;
			cin >> choice;
			if (choice == "yes" or choice == "Yes")
			{
				options();
			}
			else if (choice == "No" or choice == "no")
			{
				save = choice;
				if (save == "No" or save == "no") cout << "You go there anyway!" << endl;
				Sleep(1000);
				options();

			}
		}
	}
}