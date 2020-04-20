#pragma once
#ifndef deck
#include "card.hpp"
#include<vector>
class deck {
	std::vector<card> karte;
public:
	deck();
	~deck();
	void shuffle1();
	std::vector<card> getKarte();
	card getCard();
};
#endif