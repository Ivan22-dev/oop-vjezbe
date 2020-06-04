#pragma once
#ifndef card
#include <vector>
#include <string>

class card {
	std::string color;
public:
	card( std::string color);
	~card();
	std::string getColor();
	bool operator==(const card& rhs);
};
#endif
