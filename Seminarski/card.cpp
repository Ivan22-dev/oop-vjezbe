#include "card.hpp"
using namespace std;


card::card( std::string myColor) {
	this->color = myColor;
}
card::~card() {

}
string card::getColor() {
	return this->color;
}
bool card::operator==(const card& rhs) {
	if (this->color == rhs.color) {
		return true;
	}
	else {
		return false;
	}
}