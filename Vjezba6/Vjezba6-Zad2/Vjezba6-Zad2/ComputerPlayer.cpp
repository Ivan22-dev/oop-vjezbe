#include "ComputerPlayer.hpp"
#include <random>
using namespace std;

ComputerPlayer::ComputerPlayer() :Player("PC") {}

ComputerPlayer::~ComputerPlayer() {}

std::vector<int> ComputerPlayer::getKombinacije() {
	return kombinacije;
}

void ComputerPlayer::odaberiKovanice() {
	int rand1, rand2;
	std::random_device rd; // obtain a random number from hardware
	std::mt19937 eng(rd()); // seed the generator
	std::uniform_int_distribution<> distr(0, getKombinacije().size());
	rand1 = getKombinacije().at(distr(eng));
	setKovanice(rand1);
	std::uniform_int_distribution<> distr2(rand1, 16);
	rand2 = distr2(eng);
	setZbrojSvihKovanica(rand2);
};