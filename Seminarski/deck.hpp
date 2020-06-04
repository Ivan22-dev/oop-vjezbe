#pragma once
#ifndef deck
#include "card.hpp"

class deck {
	std::vector<card> allCards;
	std::vector<int> deckNum;
public:
	std::vector<card> getCards();
	std::vector<int> getDeckNum();
	void addCardsToDeck();
	void removeCardFromDeck(int);
	bool checkIfCardIsOnDeck(int);
	bool isDeckEmpty();
};
#endif