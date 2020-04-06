#pragma once
#ifndef Vjezba4

#include <iostream>
#include<vector>
#include<string>
#include<random>
using namespace std;


enum class zog : int { Dinari = 0, Kupe = 1, Spadi = 2, Bastoni = 3 };


class card {
public:
	vector<int> numbers = { 1,2,3,4,5,6,7,11,12,13 };
	zog vrsta;
	int number;
};

class player {
public:
	string name;
	vector<card> comb;
	int num_points;
	bool akuza();
	bool napolitana();
	player() {
		num_points = 0;
	}
};


class deck {
public:
	vector<card> karte;

	void shuffle1();
};

void deck::shuffle1() {
	vector<card> kupe;
	for (int i = 0; i < 10; i++) {
		card karta;
		karta.number = karta.numbers.at(i);
		karta.vrsta = zog::Kupe;
		kupe.push_back(karta);
	}
	vector<card> dinari;
	for (int i = 0; i < 10; i++) {
		card karta;
		karta.number = karta.numbers.at(i);
		karta.vrsta = zog::Dinari;
		kupe.push_back(karta);
	}
	vector<card> spade;
	for (int i = 0; i < 10; i++) {
		card karta;
		karta.number = karta.numbers.at(i);
		karta.vrsta = zog::Spadi;
		kupe.push_back(karta);
	}
	vector<card> bastoni;
	for (int i = 0; i < 10; i++) {
		card karta;
		karta.number = karta.numbers.at(i);
		karta.vrsta = zog::Bastoni;
		kupe.push_back(karta);
	}

	karte.assign(bastoni.begin(), bastoni.end());
	karte.assign(spade.begin(), spade.end());
	karte.assign(dinari.begin(), dinari.end());
	karte.assign(kupe.begin(), kupe.end());

	random_device random_dev;
	mt19937       generator(random_dev());
	shuffle(karte.begin(), karte.end(), generator);


}

bool player::akuza() {
	int jedan = 0, dva = 0, tri = 0;
	for (int i = 0; i < comb.size(); i++) {
		if (comb.at(i).number == 1) {
			jedan++;
		}
		if (comb.at(i).number == 2) {
			dva++;
		}
		if (comb.at(i).number == 3) {
			tri++;
		}
	}
	bool ak = false;
	if (jedan >= 3) {
		this->num_points += jedan;
		ak = true;
	}
	if (dva >= 3) {
		this->num_points += dva;
		ak = true;
	}
	if (tri >= 3) {
		this->num_points += tri;
		ak = true;
	}

	return ak;

}
bool player::napolitana() {
	vector<card> kupe;
	vector<card> spade;
	vector<card> dinari;
	vector<card> bastoni;

	for (int i = 0; i < comb.size(); i++) {
		if (comb.at(i).vrsta == zog::Bastoni) {
			bastoni.push_back(comb.at(i));
		}
		if (comb.at(i).vrsta == zog::Kupe) {
			kupe.push_back(comb.at(i));
		}
		if (comb.at(i).vrsta == zog::Spadi) {
			spade.push_back(comb.at(i));
		}
		if (comb.at(i).vrsta == zog::Dinari) {
			dinari.push_back(comb.at(i));
		}
	}
	int br_bastoni = 0, br_dinari = 0, br_spade = 0, br_kupe = 0;
	for (int i = 0; i < bastoni.size(); i++) {
		if (bastoni.at(i).number == 1 || bastoni.at(i).number == 2 || bastoni.at(i).number == 3) {
			br_bastoni++;
		}
	}
	for (int i = 0; i < kupe.size(); i++) {
		if (kupe.at(i).number == 1 || kupe.at(i).number == 2 || kupe.at(i).number == 3) {
			br_kupe++;
		}
	}

	for (int i = 0; i < spade.size(); i++) {
		if (spade.at(i).number == 1 || spade.at(i).number == 2 || spade.at(i).number == 3) {
			br_spade++;
		}
	}
	for (int i = 0; i < dinari.size(); i++) {
		if (dinari.at(i).number == 1 || dinari.at(i).number == 2 || dinari.at(i).number == 3) {
			br_dinari++;
		}
	}
	bool ak = false;
	if (br_bastoni == 3) {
		this->num_points += 3;
		ak = true;
	}
	if (br_dinari == 3) {
		this->num_points += 3;
		ak = true;
	}
	if (br_kupe == 3) {
		this->num_points += 3;
		ak = true;
	}
	if (br_spade == 3) {
		this->num_points += 3;
		ak = true;
	}
	return ak;

}

#endif