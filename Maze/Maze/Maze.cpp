#include <iostream>
#include <string>

using namespace std;

bool isPlaying = true;

void Menu()
{
	cout << "1. Play" << endl;
	cout << "2. Rules" << endl;
	cout << "3. Information" << endl;
}

void Options(int choise)
{
	if (choise == 1)
	{
		cout << "You are playing a game" << endl;
		
	}
	else if (choise == 2)
	{
		cout << "Those are the rules" << endl;
	}
	else if (choise == 3)
	{
		cout << "information" << endl;
	}
	else
	{
		cout << "incorrect input. Try again" << endl;
		cin >> choise;
		Options(choise);
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
}

int main()
{
	int n;
	string choise;
	for (;isPlaying;)
	{
		Menu();	
		cin >> n;
		Options(n);
		StopPlaying(choise);
	}

}

