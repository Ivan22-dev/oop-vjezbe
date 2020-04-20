#include "player.hpp"
#include "deck.hpp"
#include "zog.hpp"
#include "card.hpp"
#include<iostream>
using namespace std;

int main() {
	deck spil;
	cout << "Koliko zelite igraca?" << endl;
	int broj_igraca;
	cin >> broj_igraca;
	if (broj_igraca != 2 && broj_igraca != 4) {
		cout << "Krivi unos!!!" << endl;
		return 1;
	}
	vector<player> igraci;
	for (int i = 0; i < broj_igraca; i++) {
		cout << "Upisite ime " << i + 1 << ". igraca:" << endl;
		player igrac;
		string name1;
		cin >> name1;
		igrac.setName(name1);
		igraci.push_back(igrac);
	}
	spil.shuffle1();
	for (int i = 0; i < igraci.size(); i++) {
		vector<card> tempCard;
		for (int j = 0; j < 10; j++) {
			tempCard.push_back(spil.getCard());
		}
		igraci.at(i).setComb(tempCard);
	}
	for (int i = 0; i < igraci.size(); i++) {
		for (int j = 0; j < 10; j++) {
			cout << "igrac " << igraci.at(i).getName() << " karte: " << igraci.at(i).getComb().at(j).getNumber() << ", " << static_cast<int>(igraci.at(i).getComb().at(j).getVrsta()) << endl;
		}
		bool akuza = igraci.at(i).akuza();
		cout << "igrac: " << igraci.at(i).getName() << " akuza: " << akuza << ", broj bodova: " << igraci.at(i).getNum_points() << endl;
		bool napolitana = igraci.at(i).napolitana();
		cout << "igrac: " << igraci.at(i).getName() << " napolitana: " << napolitana << ", broj bodova: " << igraci.at(i).getNum_points() << endl;
	}
}

