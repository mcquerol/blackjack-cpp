#ifndef CPLAYER_H
#define CPLAYER_H

#include "CCard.h"
#include <vector>
class CPlayer {

public:

   CPlayer();
   virtual ~CPlayer();

   std::vector<CCard> cards;
   unsigned int sum;

   unsigned int getSum() const;
   void addSum(unsigned int sum);
   void addCard(CCard &card);


};
/********************
**  CLASS END
*********************/
#endif /* CPLAYER_H */
