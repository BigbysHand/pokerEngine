#ifndef POKERENGINE
#define POKERENGINE

#include <iostream>
#include <unordered_map>

/*
In a fair game of poker, the cards are always drawn from the top of the deck
as such the best data strcuture to simulate this behaviour is a stack (F.I.L.O)
by "loading" the deck randomly in a linear fashion we can simulate a deck of playing cards 
*/

enum cardValues : int
{

	TWO,
	THREE,
	FOUR,
	FIVE,
	SIX,
	SEVEN,
	EIGHT,
	NINE,
	TEN, 
	JACK,
	QUEEN, 
	KING, 
	ACE,
	LASTVAL
};

enum cardSuit : int
{
	HEARTS,
	DIAMONDS,
	CLUBS,
	SPADES,
	LASTSUIT
};

//to abstract each card for handling
typedef struct Cards
{
	cardValues val;
	cardSuit suit;

}Cards;

#endif