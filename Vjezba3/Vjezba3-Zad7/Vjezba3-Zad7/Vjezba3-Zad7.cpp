#include<iostream>
#include<vector>

using namespace std;



/*7. Napisati program u kojem korisnik unosi binarne znamenke (0 i 1) i
sprema ih u container. Unosu je kraj kad korisnik unese vrijednost koja
ne predstavlja binarnu znamenku. Nakon toga napisati funkciju stuffing_bit koja primjeni bit stuffing algoritam na container. Bit stuffing
je tehnika koja se koristi u HDLC protokolima za prijenos podataka u
kojima je početak i završetak paketa određen sa nizom bitova 01111110.
Da se ne bi sadržaj paketa brkao sa stop-bitovima, potrebno je nakon
svakog niza od pet jedinica umetnuti jednu nulu.
Primjer: za uneseni niz bitova
00111011111110001111111011
rezultat je
0011101111101100011111011011.*/

void stuffing_bit(vector<int>& myvec) {
	vector<int> neww = { 0,1,1,1,1,1,1,0 };
	
	int cnt = 0;
	for (int i = 0; i < myvec.size(); i++) {
		if (myvec.at(i) == 1) {
			cnt++;
			if (cnt == 5) {
				myvec.insert(myvec.begin() + i + 1, 0);
			}
		}
		else {
			cnt = 0;
		}
	}
	myvec.insert(myvec.end(), neww.begin(), neww.end());
	myvec.insert(myvec.begin(), neww.begin(), neww.end());
}


int main() {
	cout <<" Please enter a number :" << endl;
	int myint;
	vector<int> myvec;
	while (true) {
		cin >> myint;
		if (myint==0 || myint==1) {
			myvec.push_back(myint);
		}
		else{
			break;
		}
	}

	stuffing_bit(myvec);
	for (int i = 0; i < myvec.size(); i++) {
		cout << "," << myvec.at(i);
	}
}