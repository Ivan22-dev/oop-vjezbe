#include <iostream>
#include <fstream>
#include <iterator>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;

void ucitajDatoteku(string imeDatoteke) {
    vector<int> v;
    ifstream f(imeDatoteke);
    if (!f.is_open()) {
        cout << "Ne postoji datoteka s imenom " << imeDatoteke << endl;
        throw 1;
    }
    istream_iterator<int> is(f), eos;
    copy(is, eos, back_inserter(v));
    int counter500=count_if(v.begin(), v.end(), bind2nd(greater<int>(), 500));
    cout << "U datoteci ima " << counter500 << " brojeva vecih od 500." << endl;
    int maxElement = *max_element(v.begin(),v.end());
    int minElement = *min_element(v.begin(), v.end());
    cout << "Maximalni element datoteke je " << maxElement << " , a minimalni " << minElement <<"."<<endl;
    v.erase(remove_if(
        v.begin(),v.end(),[](const int& x) {
            return x < 300;  }), v.end());
    sort(v.begin(), v.end(), greater<int>());
    cout << "Sortirani veci od 300:" << endl;
    for (int i = 0; i < v.size(); i++) {
        cout << v.at(i) << ",";
    }
}
int main()
{
    ucitajDatoteku("numbers.txt");
}
