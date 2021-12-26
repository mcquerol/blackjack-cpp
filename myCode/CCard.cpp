#include "CCard.h"

CCard::CCard()
{
	this->suit = "NA";
	this->rank = "NA";
}

std::string CCard::getRank() const
{
	return this->rank;
}

std::string CCard::getSuit() const
{
	return this->suit;
}

void CCard::setRank(std::string rank)
{
	this->rank = rank;
}

void CCard::setSuit(std::string suit)
{
	this->suit = suit;
}

ostream& operator<<(ostream& OUT, const CCard &c)
{
	OUT << c.getRank() << " of " << c.getSuit() << endl;
	return OUT;
}
