#pragma once

/// ���� ���й��� ��� ����
#define GAME_DRAW		0		// ���
#define GAME_USER_WIN	1		// ��� �̱�
#define GAME_COM_WIN	2		// ��ǻ�� �̱�

/// ���������� ī���� ��� ����
#define CARD_SCISSORS	0		// ����
#define CARD_ROCK		1		// ����
#define CARD_PAPER		2		// ��

/// ���� ��� Ȯ�� �迭�� ��, �� ���
#define BOARD_SIZE		3

/// ������������ ��� ����
#define STRING_SCISSORS	"����"
#define STRING_ROCK		"����"
#define STRING_PAPER	"��"


class GameBoard
{
private:
	int board[BOARD_SIZE][BOARD_SIZE];
public:
	GameBoard();
	int getGameResult(int user__, int computer__);
};

