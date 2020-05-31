#include <tuple>
#include "Template.hpp"
using namespace std;

int main() {
	int integeri[9] = { 1,3,5,20,4,8,6,9,10};
	float floaat[4] = { 2.2,3.1,5.4,1.6 };
	double dfloaat[7] = { 2.2,3.1,5.4,1.6,5.6,9.8,1.2 };
	char chaar[10] = { 'i','V','A','N','d','e','l','i','j','a' };
	sortNiz(integeri, 9);
	cout << "Sortirani integeri" << endl;
	for (int i = 0; i < 9; i++) {
		cout << integeri[i] << endl;
	}
	sortNiz(floaat, 4);
	cout << "Sortirani floatovi" << endl;
	for (int i = 0; i < 4; i++) {
		cout << floaat[i] << endl;
	}
	sortNiz(dfloaat, 7);
	cout << "Sortirani double floatovi" << endl;
	for (int i = 0; i < 7; i++) {
		cout << dfloaat[i] << endl;
	}
	sortNiz(chaar, 10);
	cout << "Sortirani charovi" << endl;
	for (int i = 0; i < 10; i++) {
		cout << chaar[i] << endl;
	}
	return 0;
}