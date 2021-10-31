#include <iostream>
#include <string>
#include "Source.h"
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

