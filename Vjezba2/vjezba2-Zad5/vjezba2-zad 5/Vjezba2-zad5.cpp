# include <iostream >
# include <algorithm>
using namespace std;


/*Napisati funkciju za unos pozitivnih cijelih brojeva. Korisnik unosi brojeve
sve dok ne unese nulu. Funkcija inicijalno alocira memoriju za 10 elemenata.
Svaki put kad veličina niza dosegne alociranu veličinu, alocira se duplo. U
main funkciji ispisati dobiveni niz i osloboditi memoriju.
*/

int* expandArraySize(int* arr, int& len)
{
	const int originalLen = len;
	len *= 2;
	int* newArray = new int[len];

	copy(arr, arr + originalLen, newArray);
	/*for (int i = 0; i < originalLen; i++)
	{
		newArray[i] = arr[i];
	}*/
	delete[] arr;
	arr = newArray;
	return arr;
}

int* inputNumbers(int& length, int& numberOfElements)
{
	int* arr = new int[length];

	int i = 0;

	while (true)
	{
		int number = 0;
		cout << "Please enter a number: ";
		cin >> number;
		if (number == 0)
		{
			return arr;
		}
		if (i == length)
		{
			arr = expandArraySize(arr, length);
		}
		arr[i] = number;
		i++;
		numberOfElements++;
	}
}

int main()
{
	int len = 10;
	int numberOfElements = 0;

	int* arr = inputNumbers(len, numberOfElements);

	cout << "Length: " << len << endl;

	for (int i = 0; i < numberOfElements; i++)
	{
		cout << arr[i] << ", ";
	}

	delete(arr);
}