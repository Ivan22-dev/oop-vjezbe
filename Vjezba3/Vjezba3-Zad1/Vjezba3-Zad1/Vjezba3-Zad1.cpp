#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
/* Napisati funkciju koja će sumirati prvi i zadnji element vektora, drugi i
predzadnji, treći i predpredzadnji itd. Izračunate sume spremiti u novi
vektor te izračunati najveću i najmanju među sumama.*/
void func(const vector<int> vect) {	vector<int> neww;	int size = vect.size();	for (int i = 0; i < size / 2; i++) {		neww.push_back(vect.at(i) + vect.at(size - 1 - i));	}		int maxx = 0;	int minn = neww.at(0);		for (int i = 0; i < neww.size(); i++) {		if (neww.at(i) > maxx) {			maxx = neww.at(i);		}		if (neww.at(i) < minn) {			minn = neww.at(i);		}	}	cout << "Min:" << minn << ","<<" Max:" << maxx << endl;}int main(){
	vector<int> myvec{1,2,3,3,2,1};
	func(myvec);

}