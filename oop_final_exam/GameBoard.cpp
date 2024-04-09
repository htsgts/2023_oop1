#include "GameBoard.h"


GameBoard::GameBoard()
{
	// user win - 1
	// computer win - 2
	// draw - 0
	board[0][0] = 0;
	board[0][1] = 2;
	board[0][2] = 1;

	board[1][0] = 1;
	board[1][1] = 0;
	board[1][2] = 2;

	board[2][0] = 2;
	board[2][1] = 1;
	board[2][2] = 0;
}


int GameBoard::getGameResult(int user__, int computer__)
{
	return board[user__][computer__];
}
