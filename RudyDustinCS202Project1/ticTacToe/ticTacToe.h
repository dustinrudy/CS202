#include <string>

using namespace std;

class ticTacToe {

	public:
	      

	    void printBoard() const;

	      // Description: Function to print the current Tic Tac Toe board.
	      // Postcondition: Outputs the board with current moves made and score.

	    ticTacToe(char board[3][3]);
	      //Constructor with parameters

	    ticTacToe();
	    

	private:
	    char board[3][3];  //variable for board
	    
};
