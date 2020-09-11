#include <iostream>
using namespace std;

int const width = 9, height = 6;

void draw();

int main() {
	draw();
}

void Setup() {

}

void draw() {
	system("cls");
	//top wall	
	for (int i = 0; i <= width; i++) {
		cout << "*";
	}
	cout << endl;

	int hozLineInc = height / 3;
	int vertLineInc = width / 3;

	for (int j = 1; j < height; j++) {
		for (int i = 0; i <= width; i++) {
			if (i == 0) {
				if (j == 1 && i == 0) {
					cout << "* 1 * 2 * 3 *" << endl;
					cout << "*************" << endl;
				}
				else if (j == 3 && i == 0) {
					cout << "* 4 * 5 * 6";
				}
				else if (j == 5 && i == 0) {
					cout << "* 7 * 8 * 9";
				}

			}
			cout << endl;
		}
		//bottom wall
		for (int i = 0; i <= width; i++) {
			cout << "*";
		}
	}
}


void input() {

}

void logic() {

}
