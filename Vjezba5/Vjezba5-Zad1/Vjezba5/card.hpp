#pragma once
#ifndef card
#include "zog.hpp"
#include <vector>
class card {
	std::vector<int> numbers = { 1,2,3,4,5,6,7,11,12,13 };
	zog vrsta;
    int number;
public:
	card();
	~card();
	std::vector<int> getNumbers();
	void setVrsta(zog);
	zog getVrsta();
	void setNumber(int);
	int getNumber();
};
#endif