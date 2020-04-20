#include "card.hpp"
#include<iostream>
card::card() {
	std::cout << "card constructor"<<std::endl;
}
card::~card() {
	std::cout << "card destructor"<<std::endl;
}
std::vector<int> card::getNumbers() {
	return this->numbers;
};
void card::setVrsta(zog vrstaset) {
	this->vrsta = vrstaset;
};
zog card::getVrsta() {
	return this->vrsta;
};
void card::setNumber(int numberset) {
	this->number = numberset;
};
int card::getNumber() {
	return this->number;
};