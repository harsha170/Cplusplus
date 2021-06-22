#include<iostream>
#include<string>
using namespace std;

const int ROWS = 3;
const int COLS = 3;


void runGame();
//void initializeGameBoard(string gameBoard[ROWS][COLS]);
void printCurrentBoard(string gameBoard[ROWS][COLS]);
void getUserInput(bool xTurn, string gameBoard[ROWS][COLS]);
bool cellAlreadyOccupied(int row, int col, string gameBoard[ROWS][COLS]);
string getWinner(string gameBoard[ROWS][COLS]);
bool isBoardFull(string gameBoard[ROWS][COLS]);


int main() {

	runGame();
	return 0;
}


void runGame()
{
	string winner = "";
	bool xTurn = true;
	int theRow = 0;
	int theCol = 0;
	string gameBoard[ROWS][COLS];

	//initializeGameBoard(gameBoard);

	printCurrentBoard(gameBoard);

	while (winner == "") {
		if (xTurn) {
			cout << "Its X's Turn " << endl;
		}
		else {
			cout << "Its O's Turn " << endl;
		}
		getUserInput(xTurn, gameBoard);
		cout << endl;
		printCurrentBoard(gameBoard);
		winner = getWinner(gameBoard);
		xTurn = !xTurn;

		if (winner == "" && isBoardFull(gameBoard))
		{
			winner = "C"; //no one won it's Cat's Game
		}
	}//end while

	//cats game?
	cout << endl;
	if (winner == "C") {
		cout << "It's a Cat's Game! NO WINNER!" << endl;
	}
	else {
		cout << "The winner is " << winner << endl;
	}
	cout << endl;
}//end runGame


	void printCurrentBoard(string gameBoard[ROWS][COLS]) {
		for (int i = 0; i < ROWS; i++)
		{
			for (int j = 0; j < COLS; j++)
			{
				cout << gameBoard[i][j];
				if (j < 2)
				{
					cout << " | ";
				}
			}
			cout << endl;
			if (i < 2)
			{
				cout << "- - - - -" << endl;
			}
		}
		cout << endl;
	} //end printCurrentBoard


	void getUserInput(bool xTurn, string gameBoard[ROWS][COLS])
	{
		int row = -1;
		int col = -1;
		bool keepAsking = true;
		while (keepAsking) 
		{
			cout << "Enter the row Then Column, each from 0,1 or 2, separated by space" << endl;
			cin >> row;
			cin >> col;

			if (row >= 0 && col >= 0 && row <= 2 && col <= 2) {
				if (!cellAlreadyOccupied(row, col, gameBoard)) {
					keepAsking = false;
				}
				else {
					cout << "The cell is already occupied! " << endl;
				}
			}
		}//end while

		if (xTurn) {
			gameBoard[row][col] = "X";
		}
		else {
			gameBoard[row][col] = "O";
		}


	}//end getUserInput

	bool cellAlreadyOccupied(int row, int col, string gameBoard[ROWS][COLS]) 
	{
		return gameBoard[row][col] != " "; //if not a space its already occupied
	}//end cellAlreadyOccupied



	string getWinner(string gameBoard[ROWS][COLS]) {
		for (int i = 0; i < ROWS; i++) {
			if (gameBoard[i][0] != " " && gameBoard[i][0] == gameBoard[i][1] && gameBoard[i][1] == gameBoard[i][2])
			{
				return gameBoard[i][0]; //checking horizontol
			}
		}//end forloop

		for (int i = 0; i < COLS; i++) {
			if (gameBoard[0][i] != " " && gameBoard[0][i] == gameBoard[1][i] && gameBoard[1][i] == gameBoard[2][i])
			{
				return gameBoard[0][i]; //checking vertical
			}
		}//end for loop

		// check diagonals
		//upper left to lower right
		if (gameBoard[0][0] != " " && gameBoard[0][0] == gameBoard[1][1] && gameBoard[1][1] == gameBoard[2][2])
		{
			return gameBoard[0][0]; //checking diagonal
		}

		//lower left to upper right

		if (gameBoard[2][0] != " " && gameBoard[2][0] == gameBoard[1][1] && gameBoard[1][1] == gameBoard[0][2])
		{
			return gameBoard[2][0]; //checking diagonal
		}

		return ""; //no winner
	}	//end getWinner

	//test if board full

	bool isBoardFull(string gameBoard[ROWS][COLS]) {
		int countFill = 0;
		for (int i = 0; i < ROWS; i++) {
			for (int j = 0; j < COLS; j++) {
				if (gameBoard[i][j] != " ") {
					countFill++;
				}
			}
		}
		return countFill == 9;
	}

