#pragma once
#ifndef Librarys
#include "Book.hpp"
#include <vector>
class Library {
public:
	std::vector<Book*> knjige;
	std::vector<std::string> getSveNaslove( std::string );
	float ukupnoMB(std::string);
	std::vector<std::string> getSveKnjige(std::string);
};
#endif

