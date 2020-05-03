#include "Player.hpp"
using namespace std;

Player::Player(string ime,bool comp) {
	imeIgraca = ime;
	computerPlayer = comp;
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

bool Player::isComputerPlayer() {
	return this->computerPlayer;
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