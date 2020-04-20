#include "Board.hpp"
#include<iostream>
#include<cmath>
using namespace std;
board::board() {
	x = 0;
	y = 0;
	rub = 'o';
}
board::~board() {
}
board::board(int x1, int y1,char rub1) {
	x = x1;
	y = y1;
	rub = rub1;
	matrica.resize(y, vector<char>(x, ' '));
}
board::board(const board& b) {
	x = b.x;
	y = b.y;
	rub = b.rub;
	matrica = b.matrica;
}
void board::draw_char(point tocka, char sim) {
	matrica.at(round(tocka.y)).at(round(tocka.x)) = sim;
}
void board::draw_up_line(point tocka, char sim) {
	for (int i = 1; i < matrica.size()-1; i++) {
		for (int j = 1; j < matrica.at(i).size() - 1;j++) {
			if (i <= tocka.y && j == tocka.x) {
				matrica.at(i).at(j) = sim;
			}
		}
	}
}
void board::display(){
	for (int i = 0; i < matrica.size(); i++) {
		for (int j = 0; j < matrica.at(i).size(); j++) {
			if (i == 0 || i == matrica.size() - 1) {
				cout << rub;
				continue;
			}
			if (j == 0 || j == matrica.at(i).size() - 1) {
				cout << rub;
				continue;
			}
			cout << matrica.at(i).at(j);
		}
		cout << endl;
	}
}
void board::draw_line(point tocka1, point tocka2, char sim) {
	double deltax = tocka2.x - tocka1.x;
	double deltay = tocka2.y - tocka1.y;
	double deltaerr = abs(deltay / deltax);
	double error = 0.0;
	int y=tocka1.y;
	for (int i = tocka1.y; i <= tocka2.y;i++) {
		matrica.at(i).at(y) = sim;
		error += deltaerr;
		if (error >= 0.5) {
			if (deltay > 0) {
				y +=1;
			}
			else {
				y += -1;
			}
			error -= 1.0;
		}
	}
	if (deltay == 0) {
		for (int i = tocka1.x; i <= tocka2.x; i++) {
			matrica.at(tocka1.y).at(i) = sim;
		}
	}
};