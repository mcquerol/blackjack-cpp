#ifndef CDEALER_H
#define CDEALER_H

#include "CPlayer.h"

class CDealer : public CPlayer {

private:
	const int maxSum = 17;

public:

    CDealer();
    ~CDealer();

	const int getMaxSum() const;
};
/********************
**  CLASS END
*********************/
#endif /* CDEALER_H */
