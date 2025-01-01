#include "dealer.h"
#include <algorithm>
#include <random>

Dealer::Dealer(int nPlayers)
{
	auto rng_ = std::default_random_engine{};

	this->nPlayers_ = nPlayers;
	initDeck();
	shuffle(rng_);
	
	for (int i = 0; i < this->deck_.size(); i++)
	{
		std::cout << this->deck_[i].suit << ": " << this->deck_[i].val << std::endl;
	}
	
}
void Dealer::initDeck()
{
	for (int suitIdx = HEARTS; suitIdx != LASTSUIT; suitIdx++)
	{
		for (int valIdx = TWO; valIdx != LASTVAL; valIdx++)
		{	
			//std::cout << (cardSuit)suitIdx << ": " << valIdx << std::endl;
			Cards currCard = { .val = (cardValues)valIdx, .suit = (cardSuit)suitIdx};
			this->deck_.push_back(currCard);
		}
	}
}

void Dealer::shuffle(auto rng_)
{
	//std::copy(deck.begin(), deck.end(), std::back_inserter(this->deck_));
	std::ranges::shuffle(this->deck_, rng_);
}
