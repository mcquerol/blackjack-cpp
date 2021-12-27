#ifndef CDECK_H
#define CDECK_H

#include <string>
#include "CCard.h"

class CDeck {
private:
	std::string RANKS[13];
	std::string SUITS[4];
    /**
     * @link aggregationByValue 
     */
public:
    CCard* DECK;
    CCard getNextCard();
    void shuffleDeck();
    CDeck();
};
ostream& operator<<(ostream& OUT, const CDeck& d);
#endif /* CDECK_H */
