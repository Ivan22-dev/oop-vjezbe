#include "deck.hpp"
#include<random>
#include<iostream>
using namespace std;
deck::deck() {
	cout << "deck constructor" << endl;
}
deck::~deck() {
	cout << "deck destructor" << endl;
}
std::vector<card> deck::getKarte() {
	return this->karte;
}
void deck::shuffle1() {
	vector<card> kupe;
	for (int i = 0; i < 10; i++) {
		card karta;
		karta.setNumber(karta.getNumbers().at(i));
		karta.setVrsta(zog::Kupe);
		kupe.push_back(karta);
	}
	vector<card> dinari;
	for (int i = 0; i < 10; i++) {
		card karta;
		karta.setNumber(karta.getNumbers().at(i));
		karta.setVrsta(zog::Dinari);
		dinari.push_back(karta);
	}
	vector<card> spade;
	for (int i = 0; i < 10; i++) {
		card karta;
		karta.setNumber(karta.getNumbers().at(i)) ;
		karta.setVrsta(zog::Spadi);
		spade.push_back(karta);
	}
	vector<card> bastoni;
	for (int i = 0; i < 10; i++) {
		card karta;
		karta.setNumber(karta.getNumbers().at(i));
		karta.setVrsta(zog::Bastoni);
		bastoni.push_back(karta);
	}

	for (int i = 0; i < bastoni.size(); i++) {
		karte.push_back(bastoni.at(i));
	}

	for (int i = 0; i < spade.size(); i++) {
		karte.push_back(spade.at(i));
	}

	for (int i = 0; i < dinari.size(); i++) {
		karte.push_back(dinari.at(i));
	}

	for (int i = 0; i < kupe.size(); i++) {
		karte.push_back(kupe.at(i));
	}
	random_device random_dev;
	mt19937       generator(random_dev());
	shuffle(karte.begin(), karte.end(), generator);
}
card deck::getCard() {
	card newCard = karte.back();
	karte.pop_back();
	return newCard;
}