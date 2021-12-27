#include "CDeck.h"
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

using namespace std;
CDeck::CDeck()
{

	DECK = new CCard[52];

	RANKS[0] = "ACE";
	for(int rank = 1; rank < 10; rank++)
	{
		RANKS[rank] = to_string(rank+1);
	}
	RANKS[10] = "JACK";
	RANKS[11] = "QUEEN";
	RANKS[12] = "KING";

	SUITS[0] = "HEARTS";
	SUITS[1] = "DIAMONDS";
	SUITS[2] = "SPADES";
	SUITS[3] = "CLUBS";

	int card = 0;
	for (int suit = 0; suit < 4; suit++)
	{
		for(int rank = 0; rank < 13; rank++)
		{
			DECK[card].setRank(RANKS[rank]);
			DECK[card].setSuit(SUITS[suit]);
			card++;
		}
	}
}

CCard CDeck::getNextCard()
{
	static unsigned int cardPos = 0;
	if(cardPos == 52)
	{
		cout << "end of the deck, starting from the first card" << endl;
		cardPos = 0;
	}
	cardPos++;
	return DECK[cardPos-1];
}


void CDeck::shuffleDeck()
{
	srand (time(NULL));
	for (int card = 0; card < 52 ; card++)
	{
	    int randomNum;
	    CCard temp = DECK[card];
	    randomNum = rand() % 51;
	    DECK[card] = DECK[randomNum];
	    DECK[randomNum] = temp;
	}
	//TODO ONE CARD is not being printed
}

/**
 *
 * prints the entire deck
 */
ostream& operator<<(ostream& OUT, const CDeck &d)
{
	for(int card = 0; card < 51; card++)
	{
		cout << d.DECK[card];
	}
	return OUT;
}
