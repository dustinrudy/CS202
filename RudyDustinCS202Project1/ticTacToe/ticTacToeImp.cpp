#include <iostream>
#include <string>

#include "ticTacToe.h"

using namespace std;


//Implementation File for the class ticTacToe


void ticTacToe::board() const
{
	system("cls");
	cout << "\n\n\tTic Tac Toe\n\n";

	cout << "Player 1 (X)  -  Player 2 (O)" << endl << endl;
	cout << endl;

	cout << "     |     |     " << endl;
	cout << "  " << board[0][0] << "  |  " << board[0][1] << "  |  " << board[0][2] << endl;

	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;

	cout << "  " << board[1][0] << "  |  " << board[1][1] << "  |  " << board[1][2] << endl;

	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;

	cout << "  " << board[2][0] << "  |  " << board[2][1] << "  |  " << board[2][2] << endl;

	cout << "     |     |     " << endl << endl;
}

bool ticTacToe::isValid(char& charArray[][], bool& boolArray[][]) {
	
}



ticTacToe::ticTacToe(char board)
{
   
}

ticTacToe::ticTacToe()  //default constructor
{
   
    
}



