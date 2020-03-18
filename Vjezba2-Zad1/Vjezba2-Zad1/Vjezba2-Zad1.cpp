# include <iostream >
using namespace std;
//Zadatak 1
/*Napisati funkciju koja raèuna najveæi i najmanji broj u nizu od n prirodnih
brojeva. Funkcija vraæa tražene brojeve pomoæu referenci.*/
void min_max(int* arr, int& min, int& max, int len) {
	for (int i = 0; i < len; i++) {
		if (arr[i] > max)
			max = arr[i];
		if (arr[i] < min)
			min = arr[i];
	}
}



int main() {
	int arr[8] = { 5, 6, 7, 2, 1, 9, 20, 3 };
	int min = 200, max = 0;
	min_max(arr, min, max, 8);
	cout << "max=" << max << "\n" << "min=" << min;
}