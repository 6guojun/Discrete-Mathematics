#include "largestInteger.h"

/*Returns the largest integer in a list.*/
int largestInteger(list<int> * listPtr)
{
	int greatestInteger = INT_MIN;
	list<int> integerList = *listPtr;
	if (integerList.size() > 0)
	{
		for (list<int>::iterator it=integerList.begin(); it != integerList.end(); ++it)
		{
			if (greatestInteger < *it)
			{
				greatestInteger = *it;
			}
		}
	}
	return greatestInteger;
}

/*Tests largestInteger().*/
bool largestIntegerTest()
{
	int value = 0;
	list<int> integerList;
	cout << "Enter a list of integers: ";
	do
	{
		cin >> value;
		integerList.push_back(value);
	}
	while (!cin.eof() && !(cin.peek() == '\n'));

	cout << "The largest integer is: " << largestInteger(&integerList);
}