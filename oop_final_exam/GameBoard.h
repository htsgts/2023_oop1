#pragma once

/// 게임 승패무의 상수 정의
#define GAME_DRAW		0		// 비김
#define GAME_USER_WIN	1		// 사람 이김
#define GAME_COM_WIN	2		// 컴퓨터 이김

/// 가위바위보 카드의 상수 정의
#define CARD_SCISSORS	0		// 가위
#define CARD_ROCK		1		// 바위
#define CARD_PAPER		2		// 보

/// 게임 결과 확인 배열의 행, 열 상수
#define BOARD_SIZE		3

/// 가위바위보의 상수 선언
#define STRING_SCISSORS	"가위"
#define STRING_ROCK		"바위"
#define STRING_PAPER	"보"


class GameBoard
{
private:
	int board[BOARD_SIZE][BOARD_SIZE];
public:
	GameBoard();
	int getGameResult(int user__, int computer__);
};



