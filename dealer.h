#ifndef DEALER
#define DEALER	

#include "pokerEngine.h"
#include <algorithm>
#include <random>

class Dealer
{
private:
	int rounds_;
	int nPlayers_;

	std::vector<Cards> deck_;
	std::default_random_engine rng_ = std::default_random_engine{};

	void swapCards(Cards &a, Cards &b);
	void shuffleDeck(auto rng_);

	
public:
	Dealer(int nPlayers);
	//init and reset
	void initDeck();
	void resetDeck();

	//shuffling
	void fisherYatesShuffle(std::vector<Cards>* deck_);

	//dealing
	void dealHands();
	void flop();
	void turn();
	void river();
	void quickDeal();

	void printDeck();
	std::vector<Cards> getDeck();

	char suitToChar(cardSuit suit);
	char valToChar(cardValues val);

};


#endif
