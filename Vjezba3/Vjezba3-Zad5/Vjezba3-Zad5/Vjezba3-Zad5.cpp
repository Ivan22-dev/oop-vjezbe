#include<iostream>
#include<string>
#include<vector>
#include<random>
#include<time.h>
using namespace std;

/*5. Napisati funkciju koji prevodi engleske rečenice na pig latin jezik.Pravila
su sljedeća :
(a)ako riječ počinje samoglasnikom dopisuje se hay na kraj riječi,
(b)inače, svi suglasnici s početka riječi prebacuju se na kraj te se na
kraju riječi dopisuje ay.
Rečenice treba spremiti u vector, a zatim prevesti slučajno odabranu
rečenicu iz vektora.
Primjer : ”What time is it ? ” prevodi se kao ”atwhay imetay ishay ithay ? ”*/

int random1(int len) {
	srand(time(NULL));
	int position=rand() % (len-1);
	return position;
}
string func(string origin) {
	vector<string> neww;
		int pos = 0;
		for (int i = 0; i < origin.size(); i++) {
			if (origin.at(i) == 32 || i == origin.size() - 1) {
				neww.push_back(origin.substr(pos, i - pos));
			pos = i + 1;
			}

		}


		for (int i = 0; i < neww.size(); i++) {
			cout<< "Original:"<< neww.at(i) << endl;
		}


		for (int i = 0; i < neww.size(); i++) {
			if (neww.at(i)[0] == 'a' || neww.at(i)[0] == 'e' || neww.at(i)[0] == 'i' || neww.at(i)[0] == 'o' || neww.at(i)[0] == 'u' ||
				neww.at(i)[0] == 'A' || neww.at(i)[0] == 'E' || neww.at(i)[0] == 'I' || neww.at(i)[0] == 'O' || neww.at(i)[0] == 'U') {
				neww.at(i).append("hay");
			}
			else {
					string nova = neww.at(i);
					int j = 0;
					while((nova[j] != 'a' && nova[j] != 'e' && nova[j] != 'i' && nova[j] != 'o' && nova[j] != 'u' &&
						nova[j] != 'A' && nova[j] != 'E' && nova[j] != 'I' && nova[j] != 'O' && nova[j] != 'U')) {
						string myneww = neww.at(i);
						nova = nova.substr(1) + nova.at(0);
						neww.at(i) = nova;
							
						
					}	   
					neww.at(i).append("ay");			
			}

		}

		string modified;
		for (int i = 0; i < neww.size(); i++) {
			cout << neww.at(i)<<endl;
			modified.append(neww.at(i) + " ");
		}
		return modified;

}



int main() {
	string str = "What time is it?";
	string str2 = "Hfdadsjkf dsfujskd ifjdsikjf";
	string str3 = "Afds ids hgdeff";
	vector<string> mystr;
	mystr.push_back(str);
	mystr.push_back(str2);
	mystr.push_back(str3);
	int position = random1(mystr.size());
	string novi=func(mystr.at(position));
	cout <<"Modified:"<< novi<<endl;
	

	
}