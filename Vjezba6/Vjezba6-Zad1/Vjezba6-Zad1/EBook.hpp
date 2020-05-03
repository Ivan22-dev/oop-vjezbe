#pragma once
#ifndef EBook
#include "Book.hpp"

class EBook:public Book {
	std::string nameDat;
	float sizeMB;
public:
	EBook(std::string autor,std::string naslovKnjige,int godinaIzdanja, std::string nameDat,float sizeMB);
	~EBook();
	std::string getNameDat();
	float getSizeMB();
};
#endif