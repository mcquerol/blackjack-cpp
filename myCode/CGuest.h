/***************************************************************************
*============= Copyright by Darmstadt University of Applied Sciences =======
****************************************************************************
* Filename        : CGUEST.H
* Author          :
* Description     :
*
*
****************************************************************************/

#ifndef CGUEST_H
#define CGUEST_H
#include "CPlayer.h"
#include "CBalance.h"
class CGuest : public CPlayer {
private:
    /**
     * @link association 
     */
    CBalance bal;
public:

    CGuest();
    virtual ~CGuest();
};
/********************
**  CLASS END
*********************/
#endif /* CGUEST_H */
