#include <iostream>
#include <string>

using namespace std;

bool isPlaying = true;

void Menu()
{
	cout << " _______                             __  __                                   " << endl;
	cout << "|__   __|                           |  \\/  |                                  " << endl;
	cout << "   | |  ___    __ _   _ __ ___      | \\  / |   __ _   ____   ___   _ __   ___ " << endl;
	cout << "   | | / _ \\  / _` | | '_ ` _ \      | |\\/| |  / _` | |_  /  / _ \\ | '__| / __|" << endl;
	cout << "   | ||  __/ | (_| | | | | | | |    | |  | | | (_| |  / /  |  __/ | |    \\__ \\ " << endl;
	cout << "   |_| \\___|  \\__,_| |_| |_| |_|    |_|  |_|  \\__,_| /___|  \\___| |_|    |___/" << endl;

	cout << endl;

	cout << "1. Play" << endl;
	cout << "2. Rules" << endl;
	cout << "3. Information" << endl;
}

void info()
{
	cout << "Georgi Trendafilov - front-end" << endl;
	cout << "Georgi Ivanov - QA" << endl;
	cout << "Maksimilian - scrum trainer" << endl;
	cout << "Georgi Hrisimov - back-end" << endl;
}


void Options(int choice)
{
	switch (choice) {
	case 1:
		cout << "You are playing a game" << endl;
		break;
	case 2:
		cout << "Those are the rules: " << endl;
		break;
	case 3:
		info();
		break;
	default:
		cout << "Incorrect input. Try again!";
		cin >> choice;
		Options(choice);
		break;
	}
}

void StopPlaying(string answer)
{
	cout << "Do you want to spot exit the game." << endl;
	cout << "Yes/No" << endl;
	cin >> answer;
	if (answer == "yes" or answer == "Yes")
	{
		isPlaying = false;
	}
	system("CLS");
}

int main()
{
	int n;
	string choice;
	for (; isPlaying;)
	{
		Menu();
		cin >> n;
		Options(n);
		StopPlaying(choice);
	}

}

