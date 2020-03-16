# include <iostream >
using namespace std;

/*Definirati strukturu kruznica i strukturu pravokutnik. Napisati funkciju
koja prima niz pravokutnika i jednu kruznicu i vraća broj pravokutnika koji
sijeku kružnicu. Niz pravokutnika i kružnica šalju se u funkciju pomoću const
referenci*/


typedef struct Rectangle
{
	int a;
	int b;
};

typedef struct Circle
{
	int x;
	int y;
	int r;
};

int numOfIntersections(const Circle* circles, const Circle& circle, int len)
{
	int intersectCount = 0;

	for (int i = 0; i < len; i++)
	{
		int distance = sqrt(pow((circles[i].x - circle.x), 2) + pow((circles[i].y - circle.y), 2));
		int rSum = pow((circles[i].r + circle.r), 2);

		if (distance < rSum)
		{
			intersectCount += 1;
		}
	}

	return intersectCount;
}


int main()
{
	const Circle circle = { 2,3,12 };

	const Circle& circleRef = circle;

	const Circle circles[] = { {15,28, 10}, {100,150,1 } };

	const Circle* ptrToArray = circles;
	const Circle*& circleArrayRef = ptrToArray;


	int count = numOfIntersections(circleArrayRef, circleRef, 2);

	cout << "Number of intersected circles: " << count << endl;
}