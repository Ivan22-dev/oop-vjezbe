#include "player.hpp"
#include<iostream>
using namespace std;
player::player() {
	num_points = 0;
	cout << "player constructor" << endl;
};
player::~player() {
	cout << "player destructor" << endl;
};
bool player::akuza() {
	int jedan = 0, dva = 0, tri = 0;
	for (int i = 0; i < comb.size(); i++) {
		if (comb.at(i).getNumber() == 1) {
			jedan++;
		}
		if (comb.at(i).getNumber() == 2) {
			dva++;
		}
		if (comb.at(i).getNumber() == 3) {
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
		if (comb.at(i).getVrsta() == zog::Bastoni) {
			bastoni.push_back(comb.at(i));
		}
		if (comb.at(i).getVrsta() == zog::Kupe) {
			kupe.push_back(comb.at(i));
		}
		if (comb.at(i).getVrsta() == zog::Spadi) {
			spade.push_back(comb.at(i));
		}
		if (comb.at(i).getVrsta() == zog::Dinari) {
			dinari.push_back(comb.at(i));
		}
	}
	int br_bastoni = 0, br_dinari = 0, br_spade = 0, br_kupe = 0;
	for (int i = 0; i < bastoni.size(); i++) {
		if (bastoni.at(i).getNumber() == 1 || bastoni.at(i).getNumber() == 2 || bastoni.at(i).getNumber() == 3) {
			br_bastoni++;
		}
	}
	for (int i = 0; i < kupe.size(); i++) {
		if (kupe.at(i).getNumber() == 1 || kupe.at(i).getNumber() == 2 || kupe.at(i).getNumber() == 3) {
			br_kupe++;
		}
	}
	for (int i = 0; i < spade.size(); i++) {
		if (spade.at(i).getNumber() == 1 || spade.at(i).getNumber() == 2 || spade.at(i).getNumber() == 3) {
			br_spade++;
		}
	}
	for (int i = 0; i < dinari.size(); i++) {
		if (dinari.at(i).getNumber() == 1 || dinari.at(i).getNumber() == 2 || dinari.at(i).getNumber() == 3) {
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
std::string player::getName() {
	return this->name;
};
void player::setName(std::string nameset) {
	this->name.assign(nameset);
	cout << "name" << endl;
}
std::vector<card> player::getComb() {
	return this->comb;
};
void player::setComb(std::vector<card> combset) {
	this->comb = combset;
};
int player::getNum_points() {
	return this->num_points;
};
void player::setNum_points(int num_pointsset) {
	this->num_points = num_pointsset;
};
