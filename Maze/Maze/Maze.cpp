#include <iostream>
using namespace std;
void maze() {
	int size;
	cin >> size;
	char** maze = new char* [size];
	for (int i = 0; i < size; i++) {
		maze[i] = new char[size];
	}

	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			maze[i][j] = '#';
		}
	}

	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			cout << maze[i][j] << " ";
		}
		cout << endl;
	}
}