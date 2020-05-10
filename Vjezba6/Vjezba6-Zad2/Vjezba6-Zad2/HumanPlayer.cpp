#include "HumanPlayer.hpp"
#include <iostream>
#include <string>
using namespace std;


HumanPlayer::HumanPlayer(std::string ime):Player(ime) {}

HumanPlayer::~HumanPlayer() {}

void HumanPlayer::odaberiKovanice(){
	cout << "Igrac: " << getImeIgraca() << endl;
	string odgovor;
	cout << "Zelite li kovanicu od 1 kune" << endl;
	cin >> odgovor;
	if (odgovor == "da") {
		setKovanice(1);
	}
	cout << "Zelite li kovanicu od 2 kune" << endl;
	cin >> odgovor;
	if (odgovor == "da") {
		setKovanice(2);
	}
	cout << "Zelite li kovanicu od 5 kuna" << endl;
	cin >> odgovor;
	if (odgovor == "da") {
		setKovanice(5);
	}

	cout << "Koliko je ukupan zbroj po ruci?" << endl;
	int zbroj;
	cin >> zbroj;
	setZbrojSvihKovanica(zbroj);
};