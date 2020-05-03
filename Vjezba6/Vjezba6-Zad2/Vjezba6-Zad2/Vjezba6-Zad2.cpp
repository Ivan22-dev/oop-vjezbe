#include "Player.hpp"
#include "Game.hpp"
#include "HumanPlayer.hpp"
#include "ComputerPlayer.hpp"
#include<iostream>
using namespace std;


int main(){
	int brojIgraca = 0;
	cout << "Dobrodosli u igru Japaneza, mozete unijeti do 5 igraca!" << endl;
	cout << "Koliko zelite igraca?" << endl;
	cin >> brojIgraca;
	if (brojIgraca<1) {
		cout << "Unijeli ste znak!" << endl;
		return 1;
	}
	if (brojIgraca > 5 ) {
		cout << "Unijeli ste vise od 5 igraca!" << endl;
		return 1;
	}

	Game igra(1);
	if (brojIgraca == 1) {
		string ime;
		cout << "Ime igraca" << endl;
		cin >> ime;
		HumanPlayer *me=new HumanPlayer(ime);
		ComputerPlayer *computer=new ComputerPlayer();
		igra.addIgrac((Player*)me);
		igra.addIgrac((Player*)computer);
	}
	else {
		for (int i= 0; i < brojIgraca; i++) {
			string ime;
			cout << "Ime igraca broj "<<i+1 << endl;
			cin >> ime;
			HumanPlayer *igrac=new HumanPlayer(ime);
			igra.addIgrac((Player*)igrac);
		}
	}
	igra.igraj();
}