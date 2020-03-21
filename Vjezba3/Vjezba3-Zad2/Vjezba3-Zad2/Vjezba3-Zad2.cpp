#include<iostream>
#include<algorithm>
#include<vector>
#include<string>

using namespace std;

/* Napisati funkciju koja izmiješa riječi u rečenici u inverznom poredku.
Točka mora ostati na kraju rečenice, prva riječ mora biti napisana velikim početnim slovom, a zadnja malim. Koristiti reverse funkciju.
*/



string funk(string str) {
	vector<string> neww;
	string mynew;
	int pos = 0;
	for (int i = 0; i < str.size(); i++) {
		if (str.at(i) == 32 || i == str.size() -1) {
			neww.push_back(str.substr(pos, i-pos));
			pos = i+1;
		}

	}

	reverse(neww.begin(), neww.end());
	neww.at(0)[0] = toupper(neww.at(0)[0]);
	neww.at(neww.size() - 1)[0] = tolower(neww.at(neww.size() - 1)[0]);
	for (int i = 0; i < neww.size(); i++) {
		mynew += neww.at(i)+" ";
	}
	mynew[mynew.size()-1] = str[str.size() - 1];
	return mynew;
}

int main() {
	string str;
	str = "It kopilica fff ggg skola.";
	string newww= funk(str);
	cout << newww;

}


