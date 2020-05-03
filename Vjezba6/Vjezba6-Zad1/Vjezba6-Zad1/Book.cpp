#include "Book.hpp"
using namespace std;

Book::Book(std::string autor2, std::string naslovKnjige2, int godinaIzdanja2) {
	autor = autor2;
	naslovKnjige = naslovKnjige2;
	godinaIzdanja = godinaIzdanja2;
}

Book::~Book() {

}

string Book::getAutor() {
	return this->autor;
}

string Book::getNaslovKnjige() {
	return this->naslovKnjige;
}

int Book::getGodinaIzdanja() {
	return this->godinaIzdanja;
}