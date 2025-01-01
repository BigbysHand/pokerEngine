// pokerEngine.h : Include file for standard system include files,
// or project specific include files.

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

	TWO =    2,
	THREE =  3,
	FOUR =   4,
	FIVE =   5,
	SIX =    6,
	SEVEN =  7,
	EIGHT =  8,
	NINE =   9,
	TEN =   10, 
	JACK =  11,
	QUEEN = 12, 
	KING =  13, 
	ACE =   14,
	LASTVAL
};

enum cardSuit : char
{
	HEARTS =   '0',
	DIAMONDS = '1',
	CLUBS =    '2',
	SPADES =   '3',
	LASTSUIT
};

//to abstract each card for handling
typedef struct Cards
{
	cardValues val;
	cardSuit suit;

}Cards;

#endif