#pragma once

/*vector_new, vector_delete, vector_push_back, vector_pop_back,
vector_front, vector_back i vector_size.*/

#ifndef VECTOR_H
#define VECTOR_H

#include <iostream>
#include <algorithm>
using namespace std;

typedef struct Vector {
	int* arr;
	int logicalSize;
	int physicalSize;
};

Vector vector_new(int size)
{
	Vector newVector;

	newVector.logicalSize = size;
	newVector.physicalSize = 0;
	newVector.arr = new int[size]();

	return newVector;
}

void vector_delete(Vector& vector)
{
	delete(vector.arr);
}

void vector_resize(Vector& vector)
{
	const int originalLen = vector.logicalSize;
	vector.logicalSize *= 2;
	int* newArray = new int[vector.logicalSize];

	copy(vector.arr, vector.arr + originalLen, newArray);

	delete[] vector.arr;
	vector.arr = newArray;
}

void vector_push_back(Vector& vector, int element)
{
	if (vector.physicalSize == vector.logicalSize)
	{
		vector_resize(vector);
	}
	vector.arr[vector.physicalSize] = element;
	vector.physicalSize++;
}

void vector_pop_back(Vector& vector)
{
	vector.arr[vector.physicalSize - 1] = 0;
	vector.physicalSize--;
}

int vector_front(Vector vector)
{
	return vector.arr[0];
}

int vector_back(Vector vector)
{
	return vector.arr[vector.physicalSize - 1];
}

int vector_size(Vector vector)
{
	return vector.physicalSize;
}

void print_vector(Vector vector)
{
	for (int i = 0; i < vector.physicalSize; i++)
	{
		cout << "Element: " << vector.arr[i] << ", ";
	}
}

#endif
