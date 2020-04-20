#pragma once
#ifndef board
#include "Point.hpp"
#include<vector>
class board {
	int x;
	int y;
	char rub;
	std::vector<std::vector<char>> matrica;
public:
	board();
	~board();
	board(int x1, int y1,char rub1);
	board(const board&);
	void draw_char(point tocka, char sim);
	void display();
	void draw_up_line(point tocka, char sim);
	void draw_line(point tocka1, point tocka2, char sim);
};
#endif