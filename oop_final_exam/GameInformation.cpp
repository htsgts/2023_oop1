#include "GameInformation.h"

GameInformation::GameInformation()
{
	m_computerWin = 0;
	m_drawGame = 0;
	m_userWin = 0;
}


void GameInformation::addUserWinCount()
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
	m_drawGame++;
}


int GameInformation::getDrawGameCount()
{
	return m_drawGame;
}
