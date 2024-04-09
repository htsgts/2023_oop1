#pragma once

class GameInformation
{
private:
	int m_userWin;
	int m_computerWin;
	int m_drawGame;
public:
	GameInformation();
	void addUserWinCount();
	int getUserWinCount();
	void addComputerWinCount();
	int getComputerWinCount();
	void addDrawGameCount();
	int getDrawGameCount();
};
