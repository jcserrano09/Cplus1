//p53ArrayInputOuput.cpp
//Joseph Charles Serrano
// 12/14/16
//Ask the use how many numbers to enter, then enter in those numbers for an array that can be displayed

#include <iostream>
#include <stdlib.h>
#include <vector>
using namespace std;

int main()
{
    int i;

	cout << "How many numbers does your array have? ";
	int amount;
	cin >> amount;
	const int * const sPtr = &amount;
	int Display[ *sPtr ];

	for (int i = 0; i < amount; i++)
	{
		cout << "Enter Number# " << i+1<<" : ";
		cin >> Display[i];
	}

	cout << "The numbers you entered: ";
	for (i=0; i<amount; i++)
	{
		cout << Display[i];
		if (i<amount - 1)
			cout << ",";
	}

	cout << endl;

	system("pause");
	return 0;
}

/*
How many numbers does your array have? 7
Enter Number# 1 : 23
Enter Number# 2 : 12
Enter Number# 3 : 11
Enter Number# 4 : 10
Enter Number# 5 : 4
Enter Number# 6 : 2
Enter Number# 7 : 1
The numbers you entered: 23,12,11,10,4,2,1
*/
