#include "deck.hpp"
#include "draw.hpp"
#include<random>
#include<iostream>
using namespace std;

std::vector<card> deck::getCards() {
	return this->allCards;
}
void deck::addCardsToDeck() {
	card nara1("olive");
	card nara2("olive");
	card zuta1("yellow");
	card zuta2("yellow");
	card siva1("silver");
	card siva2("silver");
	card ljubi1("purple");
	card ljubi2("purple");
	this->allCards.push_back(nara1);
	this->allCards.push_back(nara2);
	this->allCards.push_back(zuta1);
	this->allCards.push_back(zuta2);
	this->allCards.push_back(siva1);
	this->allCards.push_back(siva2);
	this->allCards.push_back(ljubi1);
	this->allCards.push_back(ljubi2);
	random_device random_dev;
	mt19937       generator(random_dev());
	shuffle(allCards.begin(), allCards.end(), generator);
	for (int i = 0; i < 8; i++) {
		this->deckNum.push_back(i);
	}
}
std::vector<int> deck::getDeckNum() {
	return this->deckNum;
}
void deck::removeCardFromDeck(int position) {
	for (int i = 0; i < deckNum.size(); i++) {
		if (position == deckNum.at(i)) {
			this->deckNum.erase(this->deckNum.begin() + i);
		}
	}
	
}
bool deck::checkIfCardIsOnDeck(int pos) {
	for (int i = 0; i < this->deckNum.size(); i++) {
		if (pos == deckNum.at(i)) {
			return true;
		}
	}
	return false;
}
bool deck::isDeckEmpty() {
	return deckNum.size()==0?true:false;
}