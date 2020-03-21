#include<iostream>
#include<string>
using namespace std;


/*Napisati funkciju koja iz stringa izbaci svako pojavljivanje podstringa
koristeći funkcije standardne biblioteke.
*/

void removee(string& str,string word) {
	int found;
	int len = word.size();
	while ( true) {
		found = str.find(word);
		if (found == -1) {
			break;
		}
		str=str.replace(found, len, "");
	}	
}


int main() {
	string str="Napisati funkciju koja iz stringa izbaci svako pojavljivanje koja koristeći funkcije standardne biblioteke.";
	removee(str,"koja");
	cout << str;


}