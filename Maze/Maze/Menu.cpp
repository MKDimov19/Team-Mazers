#include <iostream>
#include <conio.h>
#include "Menu.h"
using namespace std;

#define KEY_UP 72
#define KEY_DOWN 80
#define KEY_LEFT 75
#define KEY_RIGHT 77

int counter = 1;
void Options()
{
	char key;
	for (int i = 0;;)
	{

		key = _getch();

		if (key == KEY_UP && (counter >= 2 && counter <= 3)) {
			system("CLS");
			Menu();
			counter--;
		}

		if (key == KEY_DOWN && (counter >= 1 && counter <= 2)) {
			system("CLS");
			Menu();
			counter++;
		}




		if (key == '\r') {
			if (counter == 1) {
				system("CLS");
				cout << "You are playing a game" << endl;
				GoBack();
				break;
			}

			else if (counter == 2) {
				system("CLS");
				rules();
				GoBack();
				break;
			}

			else if (counter == 3) {
				system("CLS");
				info();
				GoBack();
				break;
			}
		}
	}
}


void Menu()
{
	system("CLS");
	cout << " _______                             __  __                                   " << endl;
	cout << "|__   __|                           |  \\/  |                                  " << endl;
	cout << "   | |   ___    __ _   _ __ ___     | \\  / |   __ _   ____   ___   _ __   ___ " << endl;
	cout << "   | |  / _ \\  / _` | | '_ ` _` \\   | |\\/| |  / _` | |_  /  / _ \\ | '__| / __|" << endl;
	cout << "   | | |  __/ | (_| | | | | | | |   | |  | | | (_| |  / /  |  __/ | |    \\__ \\ " << endl;
	cout << "   |_|  \\___|  \\__,_| |_| |_| |_|   |_|  |_|  \\__,_| /___|  \\___| |_|    |___/" << endl;

	cout << endl;
	if (counter == 1) {
		cout << "1. Play <-" << endl;
	}
	else {
		cout << "1. Play" << endl;
	}
	if (counter == 2) {
		cout << "2. Rules <-" << endl;
	}
	else {
		cout << "2. Rules" << endl;
	}
	if (counter == 3) {
		cout << "3. Information <-" << endl;
	}
	else {
		cout << "3. Information" << endl;
	}
	
}

void info()
{
	system("CLS");
	cout << "Georgi Trendafilov - front-end" << endl;
	cout << "Georgi Ivanov - QA" << endl;
	cout << "Maksimilian - scrum trainer" << endl;
	cout << "Georgi Hrisimov - back-end" << endl;
	cout << endl;
}

void rules()
{
	cout << "Rules" << endl;
}

void GoBack()
{
	string choice;
	cout << "Do you want to return to the menu?" << endl;
	cout << "Yes/No" << endl;

	cin >> choice;
	if (choice == "yes" or choice == "Yes")
	{
		system("CLS");
		Menu();
		Options();
	}
	else if (choice == "No" or choice == "no")
	{
		cout << "You go there anyway!" << endl;

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




