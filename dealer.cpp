#include "dealer.h"
#include <algorithm>

Dealer::Dealer(int nPlayers)
{
	std::srand((int)std::time(NULL));

	this->nPlayers_ = nPlayers;

	initDeck();

	fisherYatesShuffle(&this->deck_);

	
}

void Dealer::initDeck() //init new 52 card deck
{
	for (int suitIdx = HEARTS; suitIdx != LASTSUIT; suitIdx++)
	{
		for (int valIdx = TWO; valIdx != LASTVAL; valIdx++)
		{	
			Cards currCard = { .val = (cardValues)valIdx, .suit = (cardSuit)suitIdx};
			this->deck_.push_back(currCard);
		}
	}
}

void Dealer::shuffleDeck(auto rng_)
{
	std::ranges::shuffle(this->deck_, rng_);
}

void Dealer::resetDeck() //choice of clear() 
{
	this->deck_.clear();
	initDeck();
	fisherYatesShuffle(&this->deck_);
	
}

//todo
void Dealer::dealHands()
{
	return;
}
void Dealer::flop()
{
	return;
}
void Dealer::turn()
{
	return;
}
void Dealer::river() 
{
	return;
}
void Dealer::quickDeal()
{
	flop();
	turn();
	river();
	return;
}

void Dealer::swapCards(Cards &a, Cards &b)
{
	Cards tmp = a;
	a = b;
	b = tmp;
}
/*
Fisher-Yates shuffle is an inplace shuffling algorithm that produces non-cyclic permutations
of an array. Note seeding of pseudo-random algorithms must take place outside of the function
for unique permutations
*/

void Dealer::fisherYatesShuffle(std::vector<Cards>* deck_)
{

	std::vector<Cards>& deck_ref = *deck_;

	for (int i = (int) deck_->size() - 1; i > 0; i--)
	{
		int j = std::rand() % (i + 1);

		swapCards(deck_ref[i], deck_ref[j]);

	}
	return;
}

std::vector<Cards> Dealer::getDeck() 
{
	return this->deck_;
}

char Dealer::suitToChar(cardSuit suit)
{
	switch (suit)
	{
	case HEARTS:
		return 'h';
	case DIAMONDS:
		return 'd';
	case CLUBS:
		return 'c';
	case SPADES:
		return 's';
	case LASTSUIT:
		return ' ';
	default:
		return ' ';
	}
}
char Dealer::valToChar(cardValues val)
{
	switch (val)
	{
	case TWO:
		return '2';
	case THREE:
		return '3';
	case FOUR:
		return '4';
	case FIVE:
		return '5';
	case SIX:
		return '6';
	case SEVEN:
		return '7';
	case EIGHT:
		return '8';
	case NINE:
		return '9';
	case TEN:
		return 'T';
	case JACK:
		return 'J';
	case QUEEN:
		return 'Q';
	case KING:
		return 'K';
	case ACE:
		return 'A';
	case LASTVAL:
		return ' ';
	default: 
		return ' ';
	}
}

void Dealer::printDeck() 
{
	for (int i = 0; i < this->deck_.size(); i++)
	{
		std::cout << suitToChar(this->deck_[i].suit) << ": " << valToChar(this->deck_[i].val) << std::endl;
	}
}
