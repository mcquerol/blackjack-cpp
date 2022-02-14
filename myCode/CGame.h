#ifndef CGAME_H
#define CGAME_H

#include "CDeck.h"
#include "CPlayer.h"


class CGame {
private:
    CPlayer* players[2];
    CDeck deck;
public:

    CGame();

    void start();
};

#endif /* CGAME_H */
