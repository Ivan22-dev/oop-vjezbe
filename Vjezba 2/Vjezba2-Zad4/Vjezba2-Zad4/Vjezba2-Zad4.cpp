# include <iostream >
using namespace std;
/*Napisati funkciju koja vraæa niz int vrijednosti velièine n u kojem je svaki
element zbroj svoja dva prethodnika. Prvi i drugi element u nizu su jedinice.
U main funkciji ispisati dobiveni niz i osloboditi memoriju.*/

int* new_arr(int* arr,int len) {
	int* arr2;
	arr2 = new int[len];
	arr2[0] = 1;
	arr2[1] = 1;
	int i=2;
	for(i=2; i < len; i++) {
			arr2[i] = ((arr[i-1] ) + (arr[i-2]));
	}
	return arr2;
}

int* crate_arr(int len)
{
	int* arr = new int[len];

	for (int i = 0; i < len; i++)
	{
		cout << "Unesi broj: ";
		cin >> arr[i];
	}

	return arr;
}


int main() {
	cout << "Unesi duljinu niza: ";
	int len = 0;
	cin >> len;

	int* arr = crate_arr(len);
	int* arr2=new_arr(arr, len);
	for (int i = 0; i < len; i++) {
		cout << arr2[i] << "  ";
	}
	delete(arr);

	delete(arr2);
}