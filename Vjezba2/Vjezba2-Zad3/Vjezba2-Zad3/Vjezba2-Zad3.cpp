# include <iostream >
using namespace std;
//Zadatak-3
/*Napisati funkciju koja vraæa referencu na neki element niza. Koristeæi povratnu
vrijednost funkcije kao lvalue uveæajte i-ti element niza za jedan.*/

int& fun(int *arr,int index,int len) {
	return arr[index];
}

int main() {
	int arr[4] = { 1,2,3,4};
	int index = 2;
	fun(arr, index,3)+=1;
	for(int i=0;i<4;i++) {
		cout << arr[i];
	}
}