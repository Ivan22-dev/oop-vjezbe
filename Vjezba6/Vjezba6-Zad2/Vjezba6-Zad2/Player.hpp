#pragma once
#ifndef Player
#include<vector>
#include<string>

class Player {
protected:
	int kovanice;	
	int brojBodova;
	std::string imeIgraca;
	int zbrojSvihKovanica;
public:
	Player(std::string);
	~Player();
	int getBrojBodova();
	void povecajBrojBodova();
	void setKovanice(int);
	void resetKovanice();
	int getKovanice();
	std::string getImeIgraca();
	int getZbrojSvihKovanica();
	void setZbrojSvihKovanica(int);
	virtual void odaberiKovanice()=0;
};
#endif