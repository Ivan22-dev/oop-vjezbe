
#include "vector.h"

/*Definirati strukturu koja opisuje vektor. Struktura se sastoji od niza int
elemenata, logičke i fizičke veličine niza. Fizička veličina je inicijalno init, a
kada se ta veličina napuni vrijednostima, alocira se duplo.
Napisati funkcije vector_new, vector_delete, vector_push_back, vector_pop_back,
vector_front, vector_back i vector_size.*/


int main()
{
	Vector myVector = vector_new(3);
	
	vector_push_back(myVector, 5);
	vector_push_back(myVector, 3);

	print_vector(myVector);

	cout << endl;

	cout << vector_front(myVector) << endl;

	cout << vector_back(myVector) << endl;

	cout << vector_size(myVector) << endl;

	vector_pop_back(myVector);

	cout << vector_size(myVector) << endl;

	print_vector(myVector);

	cout << endl;

	vector_push_back(myVector, 7);
	vector_push_back(myVector, 8);
	vector_push_back(myVector, 9);

	cout << vector_size(myVector) << endl;

	cout << myVector.logicalSize << endl;

	print_vector(myVector);

	cout << endl;
}