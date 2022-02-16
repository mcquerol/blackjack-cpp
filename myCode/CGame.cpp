#include "CGame.h"
#include "CPlayer.h"
#include "CDeck.h"
#include "CDealer.h"
#include "CGuest.h"

CGame::CGame()
{


	this->players[0] = new CGuest();
	this->players[1] = new CDealer();
}

void CGame::start()
{

	this->deck.shuffleDeck();
	this->players[0]->addCard(this->deck.getNextCard());

	for(int i = 0; i < this->players[0]->cards.size(); i++)
	{
		cout << this->players[0]->cards[i];
		this->players[0]->addSum(this->players[0]->cards[i].getRank()); // change string to unsigned int
		cout << this->players[0]->getSum();
	}
}


/* TODO
 * add custom player number
 *
 */
