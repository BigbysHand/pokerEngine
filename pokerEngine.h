// pokerEngine.h : Include file for standard system include files,
// or project specific include files.

#pragma once

#include <iostream>
#include <unordered_map>

static const int SUITS = 4;

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
	ACE =   14
};

enum cardSuit : char
{
	HEARTS =   '0',
	DIAMONDS = '1',
	CLUBS =    '2',
	SPADES =   '3'
};

//to abstract each card for handling
typedef struct
{
	cardValues val;
	cardSuit suit;

}Card;

//define deck params
typedef struct 
{

	char suits[SUITS];
	std::unordered_map<char, Card> cards;

}Deck;




