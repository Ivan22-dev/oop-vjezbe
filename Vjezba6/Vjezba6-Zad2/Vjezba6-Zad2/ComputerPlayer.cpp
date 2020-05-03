#include "ComputerPlayer.hpp"

ComputerPlayer::ComputerPlayer() :Player("PC",true) {}

ComputerPlayer::~ComputerPlayer() {}

std::vector<int> ComputerPlayer::getKombinacije() {
	return kombinacije;
}