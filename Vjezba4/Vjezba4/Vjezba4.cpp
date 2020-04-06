
#include "Vjezba4.h""
int main() {
	deck spil;

	cout << "Koliko zelite igraca?" << endl;
	int broj_igraca;
	cin >> broj_igraca;
	if (broj_igraca != 2 && broj_igraca != 4) {
		cout << "Krivi unos!!!" << endl;
		return 1;
	}
	vector<player> igraci;
	for (int i = 0; i < broj_igraca; i++) {
		cout << "Upisite ime " << i + 1 << ". igraca:" << endl;
		player igrac;
		cin >> igrac.name;
		igraci.push_back(igrac);
	}
	spil.shuffle1();
	for (int i = 0; i < igraci.size(); i++) {
		for (int j = 0; j < 10; j++) {
			igraci.at(i).comb.push_back(spil.karte.back());
			spil.karte.pop_back();

		}
	}
	for (int i = 0; i < igraci.size(); i++) {
		for (int j = 0; j < 10; j++) {
			cout << "igrac " << igraci.at(i).name << " karte: " << igraci.at(i).comb.at(j).number << ", " << static_cast<int>(igraci.at(i).comb.at(j).vrsta) << endl;
		}
		bool akuza = igraci.at(i).akuza();
		cout << "igrac: " << igraci.at(i).name << " akuza: " << akuza << ", broj bodova: " << igraci.at(i).num_points << endl;
		bool napolitana = igraci.at(i).napolitana();
		cout << "igrac: " << igraci.at(i).name << " napolitana: " << napolitana << ", broj bodova: " << igraci.at(i).num_points << endl;
	}
}

