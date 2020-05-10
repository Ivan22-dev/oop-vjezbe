#pragma once
#ifndef Book
#include<string>

class Book {
protected:
	std::string autor;
	std::string naslovKnjige;
	int godinaIzdanja;
public:
	Book(std::string autor, std::string naslovKnjige, int godinaIzdanja);
	~Book();
	std::string getAutor();
	std::string getNaslovKnjige();
	int getGodinaIzdanja();
};
#endif