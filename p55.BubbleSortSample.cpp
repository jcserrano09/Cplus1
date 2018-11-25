//p55.BubbleSortSample.cpp
//Joseph Charles Serrano
//Started 11/30/16 Ended 11/30/16
//Write the example File

#include <iostream>
using namespace std;
void showArray(int a[], int size);

int main()
{
	int array [] = {10,2,3,1};
	int numElements = 4;
	int temp;

	cout << "before sort:";
	showArray(array,numElements);

	for(int i=numElements-1; i>0; i--)
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
	showArray(array,numElements);
}

void showArray(int a[] , int size)
{
	int i;
	cout << "The sorted numbers = {";
	for(i=0; i < size - 1; i++)
		cout << a[i] << ",";
	cout << a[i] << "}" << endl;
}

/*
before sort:array = {10,2,3,1}
after sort: array = {1,2,3,10}

*/
