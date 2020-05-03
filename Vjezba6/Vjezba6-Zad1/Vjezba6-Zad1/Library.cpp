#include "Library.hpp"
#include "EBook.hpp"
using namespace std;
vector<string> Library::getSveNaslove(string autor) {
	vector<string> naslovi;
	for (int i = 0; i < knjige.size(); i++) {
		if (knjige.at(i)->getAutor() == autor) {
			naslovi.push_back(knjige.at(i)->getNaslovKnjige());
		}
	}
	return naslovi;
};

float Library::ukupnoMB(string autor) {
	float totalMB=0;
	for (int i = 0; i < knjige.size(); i++) {
		if (knjige.at(i)->getAutor() == autor) {
			EBook *temp = (EBook*)(knjige.at(i));
			totalMB += temp->getSizeMB();
		}
	}
	return totalMB;
};

vector<string> Library::getSveKnjige(string partOfTitle) {
	vector<string> istiNaslovi;
	for (int i = 0; i < knjige.size(); i++) {
		if (knjige.at(i)->getNaslovKnjige().find(partOfTitle) != string::npos) {
			istiNaslovi.push_back(knjige.at(i)->getNaslovKnjige());
		}
	}
	return istiNaslovi;
};