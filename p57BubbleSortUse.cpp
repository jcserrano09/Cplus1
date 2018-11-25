//p57BubbleSortUse.cpp
//Joseph Charles Serrano
//12/14/16

#include <iostream>
#include <stdlib.h>
#include <vector>
using namespace std;

void showArray(int a[], int size);

int main()
{
    int array[7];
	int numElements = 7;
	int temp;

	for (int i = 0; i < numElements; i++)
	{
		cout << "Enter Number# " << i+1<<" : ";
		cin >> array[i];
	}

	showArray(array,numElements);
	for(int i = numElements-1; i>0; i--)
	{
		for(int j=0; j<i; j++)
		{
			if(array[j] > array[j+1])
            {
                temp = array[j];
				array[j] = array[j+1];
				array[j+1] = temp;
            }
		}
	}
	cout << "Sorted ";
	showArray(array,numElements);

	int median = array[3];

	cout << "Median = "<<median<<endl;
}

void showArray(int a[] , int size)
{
	int i;
	cout << "Array = {";
	for(i=0; i < size - 1; i++)
		cout << a[i] << ",";
	cout << a[i] << "}" << endl;
}


/*
Enter Number# 1 : 90
Enter Number# 2 : 40
Enter Number# 3 : 30
Enter Number# 4 : 20
Enter Number# 5 : 10
Enter Number# 6 : 80
Enter Number# 7 : 50
Array = {90,40,30,20,10,80,50}
Sorted Array = {10,20,30,40,50,80,90}
Median = 40
*/
