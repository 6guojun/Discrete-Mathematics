#include "leastCommonMultiple.h"

//Problem Description (#13) : Given two positive integers,
//find their least common multiple.

/*Returns the least common multiple given two positive integers.*/
unsigned int leastCommonMultiple(unsigned int a, unsigned int b)
{
	return ((a*b)/greatestCommonDivisor(a, b));
}

/*Tests leastCommonMultiple().*/
bool leastCommonMultipleTest()
{
	cout << "Least Common Multiple Test" << endl;
	unsigned int a, b;
	cout << "Enter two positive integers: ";
	cin >> a >> b;
	cout << "The least common multiple is " << leastCommonMultiple(a, b) << endl;
}