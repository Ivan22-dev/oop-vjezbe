#include "Game.hpp"
#include "ComputerPlayer.hpp"
#include<iostream>
#include <random>
using namespace std;

Game::Game(int broj) {
	this->najveciBrojBodova = broj;
}

void Game::addIgrac(Player* igrac1) {
	igraci.push_back(igrac1);
}

void Game::igraj() {
	int trenutniNajveciBrojBodova = 0;
	int brojRuke = 1;
	while (trenutniNajveciBrojBodova<najveciBrojBodova) {

		cout << "Ruka broj "<<brojRuke++<<endl;
		for (int i = 0; i < igraci.size(); i++)
		{
			igraci.at(i)->resetKovanice();
			if (!igraci.at(i)->isComputerPlayer()) {
				cout << "Igrac: " << igraci.at(i)->getImeIgraca() << endl;
				string odgovor;
				cout << "Zelite li kovanicu od 1 kune" << endl;
				cin >> odgovor;
				if (odgovor == "da") {
					igraci.at(i)->setKovanice(1);
				}
				cout << "Zelite li kovanicu od 2 kune" << endl;
				cin >> odgovor;
				if (odgovor == "da") {
					igraci.at(i)->setKovanice(2);
				}
				cout << "Zelite li kovanicu od 5 kuna" << endl;
				cin >> odgovor;
				if (odgovor == "da") {
					igraci.at(i)->setKovanice(5);
				}

				cout << "Koliko je ukupan zbroj po ruci?" << endl;
				int zbroj;
				cin >> zbroj;
				igraci.at(i)->setZbrojSvihKovanica(zbroj);
			}
			else {
				int rand1, rand2;
				ComputerPlayer* comp = (ComputerPlayer*)igraci.at(i);
				std::random_device rd; // obtain a random number from hardware
				std::mt19937 eng(rd()); // seed the generator
				std::uniform_int_distribution<> distr(0, comp->getKombinacije().size());
				rand1=comp->getKombinacije().at(distr(eng));
				igraci.at(i)->setKovanice(rand1);
				std::uniform_int_distribution<> distr2(rand1, 16);
				rand2 = distr2(eng);
				igraci.at(i)->setZbrojSvihKovanica(rand2);
			}
		}
		int ukupanZbroj = 0;
		for (int i = 0; i < igraci.size(); i++) {
			ukupanZbroj += igraci.at(i)->getKovanice();
		}
		for (int i = 0; i < igraci.size(); i++) {
			cout << "Igrac: " << igraci.at(i)->getImeIgraca() << ", zbroj kovanica: " << igraci.at(i)->getKovanice()
				<< ", zbroj svih kovanica: " << igraci.at(i)->getZbrojSvihKovanica() << endl;
			if (igraci.at(i)->getZbrojSvihKovanica() == ukupanZbroj) {
				igraci.at(i)->povecajBrojBodova();
			}
		}
		for (int i = 0; i < igraci.size(); i++)
		{
			if (igraci.at(i)->getBrojBodova() > trenutniNajveciBrojBodova) {
				trenutniNajveciBrojBodova = igraci.at(i)->getBrojBodova();
				cout << "Najveci broj bodova: " << igraci.at(i)->getImeIgraca() << endl;
			}
		}
	}
}