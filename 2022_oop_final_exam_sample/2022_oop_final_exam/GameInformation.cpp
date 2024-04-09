#include "GameInformation.h"

GameInformation::GameInformation()
{
	m_userWin = 0;
	m_computerWin = 0;
}


void addUserWinCount()
{
	m_userWin++;
}


int GameInformation::getUserWinCount()
{
	return m_userWin;
}


void GameInformation::addComputerWinCount()
{
	m_computerWin++;
}


int GameInformation::getComputerWinCount()
{
	return m_computerWin;
}


void GameInformation::addDrawGameCount()
{
	m_computerWin++;
}


int GameInformation::getDrawGameCount()
{
	return m_drawGame;
}
