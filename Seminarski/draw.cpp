#include "draw.hpp"
#include<iostream>
#include<windows.h>
using namespace std;

void draw::drawCard(card karta) {
    string boja = karta.getColor();
	if (karta.getColor() == "olive") {
		HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(hConsole, 3);
		cout << "*********" << endl;
		cout << "*       *" << endl;
		cout << "*   *   *" << endl;
		cout << "* *   * *" << endl;
		cout << "* *   * *" << endl;
		cout << "* *   * *" << endl;
		cout << "*   *   *" << endl;
		cout << "* " << boja << "*" << endl;
		cout << "*********" << endl;
	}
	else if (karta.getColor() == "yellow") {
		HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(hConsole, 11);
		cout << "*********" << endl;
		cout << "* *   * *" << endl;
		cout << "* *   * *" << endl;
		cout << "*  * *  *" << endl;
		cout << "*   *   *" << endl;
		cout << "*   *   *" << endl;
		cout << "*   *   *" << endl;
		cout << "* " << boja << "*" << endl;
		cout << "*********" << endl;
	}
	else if (karta.getColor() == "silver") {
		HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(hConsole, 7);
		cout << "*********" << endl;
		cout << "*       *" << endl;
		cout << "*  **** *" << endl;
		cout << "* *     *" << endl;
		cout << "*  ***  *" << endl;
		cout << "*     * *" << endl;
		cout << "* ****  *" << endl;
		cout << "* " << boja << "*" << endl;
		cout << "*********" << endl;
	}
	else if (karta.getColor() == "purple") {
		HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(hConsole, 5);
		cout << "*********" << endl;
		cout << "* ***** *" << endl;
		cout << "* *   * *" << endl;
		cout << "* *   * *" << endl;
		cout << "* ***** *" << endl;
		cout << "* *     *" << endl;
		cout << "* *     *" << endl;
		cout << "* " << boja << "*" << endl;
		cout << "*********" << endl;
	}
}
void draw::drawBackCard(int num) {
	cout << "*********" << endl;
	cout << "*   *   *" << endl;
	cout << "*  * *  *" << endl;
	cout << "* *   * *" << endl;
	cout << "* *   * *" << endl;
	cout << "*  * *  *" << endl;
	cout << "*   *   *" << endl;
	cout << "*   "<<num<<"   *" << endl;
	cout << "*********" << endl;
};

