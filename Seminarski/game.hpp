#pragma once
#ifndef game
#include "deck.hpp"
#include "draw.hpp"

class game {
	deck spil;
	draw crtaj;
	int getCardNum();
	int getCard(int, int prva=0);
	void drawBoard();
public:
	void play();
};
#endif
