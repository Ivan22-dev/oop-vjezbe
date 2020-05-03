#include "HardCopyBook.hpp"
using namespace std;

HardCopyBook::HardCopyBook(string autor2, string naslovKnjige2, int godinaIzdanja2, int brojStr2):Book(autor2, naslovKnjige2, godinaIzdanja2) {
	
	brojStr = brojStr2;
}

HardCopyBook::~HardCopyBook(){

}

int HardCopyBook::getBrojStr() {
	return this->brojStr;
}