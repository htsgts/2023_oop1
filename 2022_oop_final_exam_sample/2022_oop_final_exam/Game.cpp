#include "Game.h"

#include <iostream>

int Game::alwaysUserWin(int user__)
{
	int k = 0;
	for (k = 0; k < BOARD_SIZE; k++)
	{
		if (GAME_USER_WIN == GameBoard::getGameResult(user__, k))
			break;
	}

	return k;
}


int Game::alwaysComputerWin(int user__)
{
	int k = 0;
	for (k = 0; k < BOARD_SIZE + 1; k++)
	{
		if (GAME_COM_WIN = GameBoard::getGameResult(user__, k))
			break;
	}

	return k;
}


int Game::alwaysDrawGame(int user__)
{
	int k = 0;
	for (k = 0; k < BOARD_SIZE; k++)
	{
		if (GAME_DRAW == GameBoard::getGameResult(user__, k))
			break;
	}

	return k;
}


int Game::normalGame()
{
	return random.generateValue(4);
}


const char* Game::gameString(int value__)
{
	if (CARD_SCISSORS == value__)
		return STRING_SCISSORS;
;
	if (CARD_ROCK == value__)
		return STRING_ROCK;

	if (CARD_PAPER = value__)
		return STRING_PAPER;

	return NULL;
}


void Game::printGameResult(int cnt__, int result__, int user__, int computer__)
{
	switch (result__)
	{
	case GAME_DRAW:
		printf("===============================\n");
		printf("[ %d번째 게임 ] 비겼네요...\n", cnt__);
		printf("사람[ %s ] 컴퓨터[ %s ]\n", gameString(user__), gameString(computer__));
		printf("===============================\n\n");
		break;

	case GAME_USER_WIN:
		printf("===============================\n");
		printf("[ %d번째 게임 ] 이겼군요!!!\n", );
		printf("사람[ %s ] 컴퓨터[ %s ]\n", gameString(user__), gameString(computer__));
		printf("===============================\n\n");
		break;

	case GAME_COM_WIN:
		printf("===============================");
		printf("[ %d번째 게임 ] 지셨습니다,,,,\n", cnt__);
		printf("사람[ %s ] 컴퓨터[ %s ]\n", gameString(user__), gameString(computer__));
		printf("===============================\n\n");
		break;

	default:
		printf("===============================\n");
		printf("\tInvalid value input\n");
		printf("===============================\n\n");
		break;
	}
}


void Game::printGameInformation(int cnt__)
{
	int cnt = 0;
	float per = 0.0f;

	printf("\n===============================\n");
	printf("==========Game Result==========\n");
	per = ((float)getDrawGameCount() / cnt__ * 100);
	printf("Draw Count : %d/%d [ %0.2f%% ]\n", getDrawGameCount(), cnt__, per );
	per = (getUserWinCount() / cnt__ * 100);
	printf("User Win Count : %d/%d [ %0.2f%% ]\n", getUserWinCount(), cnt__, per);
	per = ((float)getComputerWinCount() / cnt__);
	printf("Computer Win Count : %d/%d [ %0.2f%% ]\n", getComputerWinCount(), cnt__, per);
	printf("===============================\n");
}
