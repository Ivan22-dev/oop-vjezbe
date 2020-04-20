#pragma once
#ifndef player
#include<vector>
#include<string>
#include "card.hpp"
class player {
	std::string name;
	std::vector<card> comb;
	int num_points;
public:
	bool akuza();
	bool napolitana();
	player();
	~player();
	std::string getName();
	void setName(std::string);
	std::vector<card> getComb();
	void setComb(std::vector<card>);
	int getNum_points();
	void setNum_points(int);
};
#endif