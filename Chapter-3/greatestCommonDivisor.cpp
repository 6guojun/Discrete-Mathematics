#include "greatestCommonDivisor.h"

//Problem Description: Given two positive integers, find their greatest common
//divisor using the Euclidean Algorithm.

/*Returns the greatest common divisor between positive integers.*/
unsigned int greatestCommonDivisor(unsigned int a, unsigned int b)
{
	unsigned int x = a;
	unsigned int y = b;
	unsigned int r = 0;

	do
	{
		r = x % y;
		x = y;
		y = r;
	}
	while (y != 0);

	return x;
}

/*Tests greatestCommonDivisor().*/
bool greatestCommonDivisorTest()
{
	cout << "Greatest Common Divisor Test" << endl;
	unsigned int a, b;
	cout << "Enter two positive integers: ";
	cin >> a >> b;
	cout << "The greatest common divisor is " << greatestCommonDivisor(a, b);
}
