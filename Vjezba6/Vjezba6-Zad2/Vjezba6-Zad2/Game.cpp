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
			igraci.at(i)->odaberiKovanice();
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