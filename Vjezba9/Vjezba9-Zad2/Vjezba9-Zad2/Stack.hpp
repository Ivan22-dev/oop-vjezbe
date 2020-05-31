#pragma once
#ifndef Stack.hpp
#include <iostream>
#include <algorithm>
#include <iterator>

template<typename T>
class Stack
{
	T* niz;
	int brojClanova;
	int vrh;
	bool is_full();
public:
	Stack(int);
	~Stack();
	void push(T);
	T pop();
	bool is_empty();
	void print();
};




#endif 
