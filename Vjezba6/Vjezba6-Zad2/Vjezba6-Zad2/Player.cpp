#include "Player.hpp"
using namespace std;

Player::Player(string ime) {
	imeIgraca = ime;
	brojBodova = 0;
	kovanice = 0;
}

Player::~Player() {}

int Player::getBrojBodova() {
	return this->brojBodova;
}

void Player::povecajBrojBodova() {
	brojBodova++;
}


void Player::setKovanice(int kovanica) {
	kovanice += kovanica;
}

void Player::resetKovanice() {
	kovanice = 0;
}

int Player::getKovanice() {
	return kovanice;
}

string Player::getImeIgraca() {
	return imeIgraca;
}

int Player::getZbrojSvihKovanica() {
	return zbrojSvihKovanica;
}

void Player::setZbrojSvihKovanica(int zbroj) {
	zbrojSvihKovanica = zbroj;
}