#include<iostream>
#include<vector>
using namespace std;

/*8. Napisati funkciju unstuffing_bit koja je inverzna funkciji stuffin_bit
iz predhodnog zadatka. Funkcija prima modificirani container i izbacuje
umetnute nule kako bi se dobila originalna sekvenca.*/
void unstuffing_bit(vector<int>& myvec) {
	int cnt = 0;
	for (int i = 0; i < myvec.size(); i++) {
		if (myvec.at(i) == 1) {
			cnt++;
			if (cnt == 5) {
				myvec.erase(myvec.begin()+1 + i);
			}
		}
		else {
			cnt = 0;
		}
	}

}



int main() {
	cout << " Please enter a number :" << endl;
	int myint;
	vector<int> myvec;
	while (true) {
		cin >> myint;
		if (myint == 0 || myint == 1) {
			myvec.push_back(myint);
		}
		else {
			break;
		}
	}

	unstuffing_bit(myvec);
	for (int i = 0; i < myvec.size(); i++) {
		cout << "," << myvec.at(i);
	}
}