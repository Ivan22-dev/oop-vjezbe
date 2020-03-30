#include<iostream>
#include<vector>
#include<list>
using namespace std;

/* 6. Napisati funkciju koja u listu prirodnih brojeva ispred svakog parnog
broja umetne nulu, a iza svakog neparnog broja osim jedinice umetne
jedinicu. Funkcija vraća broj elemenata između prve nule u listi i zadnje
jedinice. U main funkciji generirati listu, pozvati funkciju, ispisati listu
i povratnu vrijednost funkcije.
*/

int func(list<int> L1) {

	for (list<int>::iterator it = L1.begin(); it != L1.end(); ++it) {
		if (*it % 2 == 0){ 
			//cout << ' ' << *it;
			L1.insert(it, 0);
		}
		else {
			if (*it != 1) {
				L1.insert(++it, 1);
				it--;
			}
		}
	}
	int br = 0, fullBrojac=0;
	int jedan = 0;
	bool upali = false;
	for (list<int>::iterator it = L1.begin(); it != L1.end(); ++it) {
		cout << " "<< *it;
		if (*it == 0) {
			upali = true;
		}
		if (*it == 1) {
			jedan = fullBrojac;
		}
		if (upali) {
			br++;
		}
		fullBrojac++;
	}
	int full = br - (fullBrojac - jedan);
	return full;

}



int main() {
	int arr[] = { 1,2,3,4,5,6,7,8 };
	list<int> L1(arr,arr+8);
	int full=func(L1);
	cout << endl << full << endl;



}