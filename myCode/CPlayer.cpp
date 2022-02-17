#include "CPlayer.h"


CPlayer::CPlayer()
{
	this->sum = 0;

}

CPlayer::~CPlayer()
{

}

unsigned int CPlayer::getSum() const
{
	return this->sum;
}

void CPlayer::addSum(unsigned int sum)
{
	this->sum += sum;
}

void CPlayer::addCard(CCard &card)
{
	this->cards.push_back(card);
}
