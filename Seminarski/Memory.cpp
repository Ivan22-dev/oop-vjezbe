#include "card.hpp"
#include"deck.hpp"
#include"game.hpp"
#include<iostream>
#include<windows.h>

using namespace std;

int main() {
	cout << "Dobrodosli u igru 'Memory':" << endl;
	game igra;
	igra.play();
}