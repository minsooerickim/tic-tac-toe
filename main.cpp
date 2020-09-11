#include <iostream>
using namespace std;

char matrix[3][3] = { '1', '2', '3', '4', '5', '6', '7', '8', '9' };
char userInput, player = 'X';
bool gameOver = true, repeat = true;
int turnCount = 0;

void draw();
void input();
void togglePlayer();
void winner();

int main() {
	cout << "Tic Tac Toe" << endl;
	draw();
	while (gameOver) {
		input();
		draw();
		winner();
		togglePlayer();
	}
}
void draw() {
	cout << endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
}
void input() {
	repeat = true;
	while (repeat) {
		cout << "Enter the number in the field: ";
		cin >> userInput;

		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				if (userInput == matrix[i][j]) {
					matrix[i][j] = player;
					repeat = false;
					turnCount += 1;
				}
			}
		}
		if (repeat == true)
			cout << "\nThis field is already taken!\n" << endl;
	}
}
void togglePlayer() {
	if (player == 'X')
		player = 'O';
	else
		player = 'X';
}
void winner() {
	//check rows
	for (int i = 0; i < 3; i++) {
		if (matrix[i][0] == matrix[i][1] && matrix[i][1] == matrix[i][2]) {
			gameOver = false;
			cout << "Game Over! " << matrix[i][0] << " Wins!";
			break;
		}
	}
	//check columns
	for (int j = 0; j < 3; j++) {
		if (matrix[0][j] == matrix[1][j] && matrix[1][j] == matrix[2][j]) {
			gameOver = false;
			cout << "Game Over! " << matrix[0][j] << " Wins!";
			break;
		}
	}
	//diagonals
	if (matrix[0][0] == matrix[1][1] && matrix[1][1] == matrix[2][2]) {
		gameOver = false;
		cout << "Game Over! "<< matrix[0][0] << " Wins!";
	}
	if (matrix[0][2] == matrix[1][1] && matrix[1][1] == matrix[2][0]) {
		gameOver = false;
		cout << "Game Over! " << matrix[0][2] << " Wins!";
	}
	
	if (turnCount == 9) {
		if (gameOver) {
			cout << "It is a tie! Nobody wins ahahah!";
			gameOver = false;
		}
	}
}