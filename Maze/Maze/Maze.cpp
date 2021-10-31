#include <iostream>
#include <string>
#include "Header.h"
using namespace std;

bool isPlaying = true;

int main()
{
	int n;
	string choice;
	for (; isPlaying;)
	{
		Menu();
		cin >> n;
		Options(n);
	}

}

