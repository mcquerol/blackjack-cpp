#ifndef CCARD_H
#define CCARD_H

#include <map>
#include <iostream>

using namespace std;
class CCard {
private:
    std::string rank;
    std::string suit;
public:

    CCard();

    std::string getRank() const;
    std::string getSuit() const;

	void setRank(const std::string rank);
	void setSuit(const std::string suit);


};
ostream& operator<<(ostream& OUT, const CCard &c);
#endif /* CCARD_H */
