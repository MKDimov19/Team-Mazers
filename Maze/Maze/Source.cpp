#include <iostream>
#include "Source.h"
using namespace std;

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

	cout << "1. Play" << endl;
	cout << "2. Rules" << endl;
	cout << "3. Information" << endl;
}

void info()
{
	system("CLS");
	cout << "Georgi Trendafilov - front-end" << endl;
	cout << "Georgi Ivanov - QA" << endl;
	cout << "Maksimilian - scrum trainer" << endl;
	cout << "Georgi Hrisimov - back-end" << endl;
}

void rules()
{
	cout << "Rules" << endl;
}

void GoBack()
{
	string choice;
	int n;
	cout << "Do you want to return to the menu?" << endl;
	cout << "Yes/No" << endl;

	cin >> choice;
	if (choice == "yes" or choice == "Yes")
	{
		Menu();
		n = 0;
		cin >> n;
		Options(n);
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
		system("CLS");
		if (save == "No" or save == "no") cout << "You go there anyway!" << endl;

	}

}

void Options(int choice)
{
	switch (choice) {
	case 1:
		system("CLS");
		cout << "You are playing a game" << endl;
		GoBack();
		break;
	case 2:
		system("CLS");
		rules();
		GoBack();
		break;
	case 3:
		system("CLS");
		info();
		GoBack();
		break;

	default:
		cout << "Incorrect input. Try again!" << endl;
		cin >> choice;
		Options(choice);
		break;
	}
}
