#include <iostream>

#include "Game.h"

/// 전체 게임 횟수 지정
#define GAME_ROUND	5


bool checkUserInput(int input__)
{
	if ((CARD_SCISSORS == input__) ||
		(CARD_ROCK == input__) ||
		(CARD_PAPER == input__))
	return true;

	return false;
}

int main()
{
	int i = 0;
	int userValue = 0;		// 사람의 가위바위보
	int computerValue = 0;	// 컴퓨터의 가위바위보
	int result = 0;			// 게임 결과
	int gameCnt = 0;		// 게임 진행 횟수
	Game game;				// 가위바위보 게임 객체

	/// 지정된 횟수만큼 반복 수행
	for (i = 0; i < GAME_ROUND; i++)
	{
		/// 사람의 가위/바위/보 생성
		userValue = game.normalGame();
		std::cout << "입력(가위:0, 바위:1, 보:2) : ";
		std::cin >> userValue;

		/// 사용자 입력이 잘못된 경우
		if (false == checkUserInput(userValue))
		{
			/// 게임 횟수 증가
			gameCnt++;
			/// 비긴 것으로 처리
			game.addDrawGameCount();
			/// 입력 실수에 대한 정보 출력
			std::cout << "0, 1, 2 값중 하나를 입력하세요" << std::endl;
			continue;
		}

		/// 일반 게임
		computerValue = game.normalGame();
		/// 항상 비기는 게임
		//computerValue = game.alwaysDrawGame(userValue);
		/// 항상 사용자가 이기는 게임
		//computerValue = game.alwaysUserWin(userValue);
		/// 항상 컴퓨터가 이기는 게임
		//computerValue = game.alwaysComputerWin(userValue);

		/// 게임 결과 획득
		result = game.getGameResult(userValue, computerValue);

		/// 결과 누적
		switch (result)
		{
			/// 비긴 게임 횟수 증가
		case GAME_DRAW:
			game.addDrawGameCount();
			break;

			/// 사람이 이긴 횟수 증가
		case GAME_USER_WIN:
			game.addUserWinCount();
			break;

			/// 컴퓨터가 이긴 횟수 증가
		case GAME_COM_WIN:
			game.addComputerWinCount();
			break;

		default:
			break;
		}
		/// 게임 결과 출력
		game.printGameResult(i + 1, result, userValue, computerValue);
		/// 게임 횟수 누적
		gameCnt++;
	}

	/// 전체 게임 정보 결과 출력
	game.printGameInformation(i);

	return 0;
}
