#include <iostream>
#include <conio.h>
#include <windows.h>
#include "Menu.h"
#include "Maze.h"

using namespace std;

int counter = 1;
void options() {
	Maze reference;
	cout << endl;
	cout << "Current selection " << counter << endl;
	char key;
	for (int i = 0;;)
	{
		key = _getch();

		if (key == KEY_UP && (counter >= 2 && counter <= 4)) {
			system("CLS");
			menu();
			counter--;
			cout << endl;
			cout << "Current selection " << counter << endl;
		}

		if (key == KEY_DOWN && (counter >= 1 && counter <= 3)) {
			system("CLS");
			menu();
			counter++;
			cout << endl;
			cout << "Current selection " << counter << endl;
		}




		if (key == '\r') {
			if (counter == 1) {
				system("CLS");
				cout << "You are playing a game" << endl;
				reference.movement();
				break;
			}

			else if (counter == 2) {
				system("CLS");
				rules();
				goback();
				break;
			}

			else if (counter == 3) {
				system("CLS");
				info();
				goback();
				break;
			}

			else if (counter == 4) {
				system("CLS");
				cout << "Exited the program successfully." << endl;
				exit(0);
			}
		}
	}
}


void menu() {
	system("CLS");
	cout << " _______                             __  __                                   " << endl;
	cout << "|__   __|                           |  \\/  |                                  " << endl;
	cout << "   | |   ___    __ _   _ __ ___     | \\  / |   __ _   ____   ___   _ __   ___ " << endl;
	cout << "   | |  / _ \\  / _` | | '_ ` _` \\   | |\\/| |  / _` | |_  /  / _ \\ | '__| / __|" << endl;
	cout << "   | | |  __/ | (_| | | | | | | |   | |  | | | (_| |  / /  |  __/ | |    \\__ \\ " << endl;
	cout << "   |_|  \\___|  \\__,_| |_| |_| |_|   |_|  |_|  \\__,_| /___|  \\___| |_|    |___/" << endl;

	cout << endl;
	cout << "1. Play" << endl;
	cout << "2. Rules" << endl;
	cout << "3. Information" << endl;
	cout << "4. Exit" << endl;
}

void info() {
	system("CLS");
	cout << "Georgi Trendafilov - front-end" << endl;
	cout << "Georgi Ivanov - QA" << endl;
	cout << "Maksimilian - scrum trainer" << endl;
	cout << "Georgi Hrisimov - back-end" << endl;
	cout << endl;
}

void rules() {
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
		menu();
		options();
	}
	else if (choice == "No" or choice == "no")
	{
		cout << "You go there anyway!" << endl;
		Sleep(1000);
		menu();
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
				i = false;
			}
			else if (choice == "No" or choice == "no")
			{
				i = false;
				save = choice;
			}
		}
		if (save == "No" or save == "no") cout << "You go there anyway!" << endl;
	}
}