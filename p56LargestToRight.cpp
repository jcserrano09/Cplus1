//p56LargestToRight.cpp
//Joseph Charles Serrano
//12/14/16
//Write a program that asks the user for an array of 6 numbers (in any order).
//Your program moves the largest number all the way to the right on the array.

#include <iostream>
#include <stdlib.h>
#include <vector>
using namespace std;

int main()
{
	int array[6];
	int temp;

	for(int i = 0; i < 6; i++)
	{
		cout << "Enter Number# " << i+1<<" : ";
		cin >> array[i];
	}
	cout << "The Biggest number moved to the right: \n";
	
	for(int i=0; i<6; i++)
	{
		cout << array[i];

		if(i<5)
			cout << ",";

        if(array[i] > array[i+1])
        {
            temp = array[i];
            array[i] = array[i+1];
			array[i+1] = temp;
        }
	}

	cout << endl;

	system("pause");
	return 0;
}
