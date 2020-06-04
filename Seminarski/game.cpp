#include "game.hpp"
#include "draw.hpp"
#include<windows.h>
#include<iostream>
#include "conio.h"
#include <ctime>
using namespace std;

int game::getCard(int prvaDruga, int prvaIzvcena) {
	int prva = 0;
	int druga = 0;
	while (true) {
		if (prvaDruga == 1) {
			cout << "Odaberite prvu kartu:" << endl;
			prva=getCardNum();
			if (prva == -1) {
				continue;
			}
			prva--;
			if (spil.checkIfCardIsOnDeck(prva)) {
				return prva;
			} else {
				cout << "Odabrali ste kartu koja je vec pogodjena!" << endl;
			}
		}
		else if (prvaDruga == 2) {
			cout << "Odaberite drugu kartu:" << endl;
			druga= getCardNum();
			if (druga == -1) {
				continue;
			}
			druga--;
			if (druga == prvaIzvcena) {
				cout << "Odabrali ste istu kartu!" << endl;
				continue;
			}
			if (spil.checkIfCardIsOnDeck(druga)) {
				return druga;
			} else {
				cout << "Odabrali ste kartu koja je vec pogodjena!" << endl;
			}
		}
	}
}
int game::getCardNum() {
	int broj;
	cin >> broj;
	if (!cin.good()) {
		cin.clear();
		cin.ignore(INT_MAX, '\n');
		cout << "Niste unijeli broj!" << endl;
		return -1;
	}
	if(broj>8||broj<1){
		cout << "Unesite broj u rasponu 1-8!" << endl;
		return -1;
	}
	return broj;
}
void game::drawBoard() {
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 10);
	for (int i = 0; i < spil.getDeckNum().size(); i++) {
		crtaj.drawBackCard(spil.getDeckNum().at(i)+1);
	}
}
void game::play() {
	spil.addCardsToDeck();
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	clock_t start=clock();
	int prva = 0;
	int druga = 0;
	while(!spil.isDeckEmpty()){
		drawBoard();
		prva = getCard(1);
		crtaj.drawCard(spil.getCards().at(prva));
		druga = getCard(2, prva);
		crtaj.drawCard(spil.getCards().at(druga));
		SetConsoleTextAttribute(hConsole, 15);
		if (spil.getCards().at(prva) == spil.getCards().at(druga)) {
			cout << "Pogodili ste!" << endl;
			spil.removeCardFromDeck(prva); 
			spil.removeCardFromDeck(druga);
			if (spil.isDeckEmpty()) {
				continue;
			}
			cout << "Pritisnite bilo koju tipku za nastavak" << endl;
			_getch();
		}
		else {
			cout << "Promasaj!" << endl;
			cout << "Pokusajte ponovo, pritisnite bilo koju tipku za nastavak" << endl;
			_getch();
		}
	}
	int duration = (clock() - start) / (double)CLOCKS_PER_SEC;
	cout << "Cestitamo, pogodili ste sve brojeve!" << endl;
	cout << "Potrebno vam je " << duration <<" sekundi." <<endl;
	SetConsoleTextAttribute(hConsole, 15);
}