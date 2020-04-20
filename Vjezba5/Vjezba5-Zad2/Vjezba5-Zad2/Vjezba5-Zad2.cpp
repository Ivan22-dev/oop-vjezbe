#include"Point.hpp"
#include"Board.hpp"
int main()
{
	board ploca(20, 10,'o');
	point tocka(6,4);
	point tocka2(7, 3);
	point tocka3(2, 2);
	point tocka4(8, 8);
	point tocka5(2, 8);
	point tocka6(16, 8);
	ploca.draw_char(tocka, 'x');
	ploca.draw_up_line(tocka2, 'y');
	ploca.draw_line(tocka3, tocka4, 'z');
	ploca.draw_line(tocka5, tocka6, 'z');
	ploca.display();
	return 0;
}