#include "EBook.hpp"
using namespace std;

EBook::EBook(string autor, string naslovKnjige, int godinaIzdanja, string nameDat2, float sizeMB2): Book(autor, naslovKnjige, godinaIzdanja) {
	
	nameDat = nameDat2;
	sizeMB = sizeMB2;
}

EBook::~EBook() {

}

string EBook::getNameDat() {
	return this->nameDat;
}

float EBook::getSizeMB() {
	return this->sizeMB;
}