#include <fstream>
#include <iostream>
#include <iterator>
#include <vector>
#include <string>
#include "Library.hpp"
#include "HardCopyBook.hpp"
#include "EBook.hpp"

using namespace std;

vector<string> splitString(string line) {
    size_t pos = 0;
    std::string token;
    string delimiter = ";";
    vector<string> tokens;
    while ((pos = line.find(delimiter)) != std::string::npos) {
        token = line.substr(0, pos);
        std::cout << token << std::endl;
        tokens.push_back(token);
        line.erase(0, pos + delimiter.length());
    }
    cout << line<<endl;
    tokens.push_back(line);
    return tokens;
}

int main()
{
    ifstream fin("my.txt");
    vector<string> v;
    string line;
    while (getline(fin, line))
        v.push_back(line);
    vector<string>::iterator it;
    Library knjiznica;
    for (it = v.begin(); it != v.end(); ++it) {

        line = *it;
        cout << line << endl;
        vector<string> tokens = splitString(line);
        if (tokens.size() == 3) {
            HardCopyBook* book = new HardCopyBook(tokens.at(0), tokens.at(1),0, stoi(tokens.at(2)));
            knjiznica.knjige.push_back(book);
        }
        else if (tokens.size() == 4) {
            EBook* book = new EBook(tokens.at(0), tokens.at(1),0, tokens.at(2), stof(tokens.at(3).substr(0, tokens.at(3).size() - 3)));
            knjiznica.knjige.push_back(book);
        }
    }
    vector<string> sviNasloviOdAutora = knjiznica.getSveNaslove("Aldous Huxley");
    cout << "Svi naslovi od autora: " << "Aldous Huxley" << endl;
    for (int i = 0; i < sviNasloviOdAutora.size(); i++) {
        cout << sviNasloviOdAutora.at(i) << endl;
    }
    float Ukupno = knjiznica.ukupnoMB("Shin Takahashi, Iroha Inoue");
    cout <<"Ukupno MB autora:"<< Ukupno << endl;
    vector<string> sveSaSlicnimNaslovima = knjiznica.getSveKnjige("Guide");
    cout << "Slicni naslovi: " << endl;
    for (int i = 0; i < sveSaSlicnimNaslovima.size(); i++) {
        cout << sveSaSlicnimNaslovima.at(i) << endl;
    }
}


