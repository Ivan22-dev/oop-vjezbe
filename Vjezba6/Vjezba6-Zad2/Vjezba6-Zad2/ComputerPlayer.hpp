#pragma once
#ifndef ComputerPlayer
#include "Player.hpp"
#include <string>

class ComputerPlayer :Player {
	//moguce kombinacije
	std::vector<int> kombinacije = { 0,1,2,3,5,6,7,8 };
public:
	ComputerPlayer();
	~ComputerPlayer();
	std::vector<int> getKombinacije();
	void odaberiKovanice();
};
#endif
