#pragma once

#include "RandomGenerator.h"
#include "GameBoard.h"
#include "GameInformation.h"


class Game : public GameInformation, public GameBoard
{
private:
	RandomGenerator random;

	const char* gameString(int value__);

public:
	int alwaysUserWin(int user__);
	int alwaysComputerWin(int user__);
	int alwaysDrawGame(int user__);
	int normalGame();

	void printGameResult(int cnt__, int result__, int user__, int computer__);
	void printGameInformation(int cnt__);
};

