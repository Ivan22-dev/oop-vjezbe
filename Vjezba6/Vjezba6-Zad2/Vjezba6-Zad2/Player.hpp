#pragma once
#ifndef Player
#include<vector>
#include<string>

class Player {
protected:
	int kovanice;	
	int brojBodova;
	bool computerPlayer;
	std::string imeIgraca;
	int zbrojSvihKovanica;
public:
	Player(std::string, bool);
	~Player();
	int getBrojBodova();
	void povecajBrojBodova();
	bool isComputerPlayer();
	void setKovanice(int);
	void resetKovanice();
	int getKovanice();
	std::string getImeIgraca();
	int getZbrojSvihKovanica();
	void setZbrojSvihKovanica(int);
};
#endif