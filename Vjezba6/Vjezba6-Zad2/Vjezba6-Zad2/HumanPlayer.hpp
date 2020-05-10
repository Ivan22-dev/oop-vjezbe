#pragma once
#ifndef HumanPlayer
#include "Player.hpp"
#include <string>

class HumanPlayer :Player {
public:
	HumanPlayer(std::string);
	~HumanPlayer();
	void odaberiKovanice();

};
#endif