#pragma once
#ifndef HardCopyBook
#include "Book.hpp"

class HardCopyBook:public Book {
	int brojStr;
public:
	HardCopyBook(std::string autor, std::string naslovKnjige, int godinaIzdanja, int brojStr);
	~HardCopyBook();
	int getBrojStr();
};
#endif