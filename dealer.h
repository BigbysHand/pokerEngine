#ifndef DEALER
#define DEALER	

#include "pokerEngine.h"

class Dealer
{
private:
	int rounds_;
	int nPlayers_;
	std::vector<Cards> deck_;
public:
	Dealer(int nPlayers);
	void initDeck();
	void shuffle(auto rng_);

};


#endif
