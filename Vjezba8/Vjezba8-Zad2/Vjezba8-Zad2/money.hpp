#pragma once
#ifndef money
#include<iostream>

class money {
	int kn;
	int lp;
public:
	money(int kn, int lipe = 0);
	~money();
	money operator+(const money& drugi);
	money operator-(const money& drugi);
	money& operator+=(const money& drugi);
	money& operator-=(const money& drugi);
	friend std::ostream& operator<< (std::ostream& os, const money& p);
	operator double();
};
#endif