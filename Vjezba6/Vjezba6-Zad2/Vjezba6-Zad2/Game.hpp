#include<vector>
#include "Player.hpp"

class Game {
	int najveciBrojBodova;
	std::vector<Player*> igraci;
public:
	Game(int);
	void addIgrac(Player*);
	void igraj();
};