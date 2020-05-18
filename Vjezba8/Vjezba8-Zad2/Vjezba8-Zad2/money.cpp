#include "money.hpp"
using namespace std;

money::money(int kune, int lipe) {
	this->kn = kune;
	this->lp = lipe;
}
money::~money() {
}
money money::operator+(const money& drugi2) {
	int lipe = this->lp + drugi2.lp;
	int kune = this->kn + drugi2.kn;
	if (lipe >= 100) {
		kune++;
		lipe -= 100;
	}
	return money(kune, lipe);
}
money money::operator-(const money& drugi2) {
	int lipe = this->lp - drugi2.lp;
	int kune = this->kn - drugi2.kn;
	if (lipe < 0) {
		kune--;
		lipe += 100;
	}
	return money(kune, lipe);
}
money& money::operator+=(const money& drugi2) {
	this->lp += drugi2.lp;
	this->kn += drugi2.kn;
	if (this->lp >= 100) {
		this->kn++;
		this->lp -= 100;
	}
	return *this;
}
money& money::operator-=(const money& drugi2) {
	this->lp -= drugi2.lp;
	this->kn -= drugi2.kn;
	if (this->lp < 0) {
		this->kn--;
		this->lp += 100;
	}
	return *this;
}
ostream& operator<< (ostream& os, const money& p) {
	os << p.kn << " kuna, " << p.lp << " lipa.";
	return os;
}
money::operator double() {
	double db = this->kn + this->lp / 100.0000;
	return db;
}