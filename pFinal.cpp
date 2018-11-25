//pFinal.cpp
//Joseph Charles Serrano
//12/15/16
//Write a program that makes an array of 25 random integers each from 3 to 7 (use your function randint() to generate these numbers).

#include <iostream>
#include <stdlib.h>
#include <ctime>
#include <vector>
using namespace std;

void showArray ( int a[ ], int size );                                         // shows the array in the format "int a [ ] = { 3, 7, 4, ... ,5, 6, 3, 4, 7 } "

void showReverse ( int a[ ], int size );                                    // shows the array in reverse using the format "int a [ ] = { 7, 4, 3, 6, 5, ... , 4, 7, 3 } "

int  lowest ( int a[ ], int size );                                                 // finds and returns the lowest value in the array (should be 7)

int  highest ( int a[ ], int size );                                                // finds and returns the highest value in the array (should be 3)

int  sumArray ( int a[ ], int size );                                            // calculates and returns the sum of all values in the array

float averageVal ( int a[ ], int size );                                        // calculates and returns the average of all values in the array

int count5 (int five, int a[ ], int size );                                                 // returns how many times the number 5 appears in the array

int firstMinusLast ( int a[ ], int size );                                    // returns the difference between the First Array Element - Last Array Element

void showBeforeIndex( int a [ ], int size, int index);            // shows all array values before a specified index

void done ( );                                                                           // a function that shows the message "I am now done with CSS1! :)

int randint(int a[], int size); 	//my random int function

int main()
{
	int x;
	int array[25];
	int numElements = 25;
	int elem_five = 5;

	srand(time(0));

	cout << "Making an array of 25 random integers from 3 to 7\n";

	randint(array, numElements);

	showArray(array, numElements);

	showReverse(array, numElements);

	lowest(array, numElements);

	highest(array, numElements);

	sumArray(array, numElements);

	averageVal(array, numElements);

	cout << "The number five appears " << count5(elem_five, array, numElements) <<" times.\n";

	firstMinusLast(array, numElements);

	showBeforeIndex(array, numElements, 11);

	done();
}

int randint(int a[], int size)
{
	int i;
	for(int i = 0; i < size; i++	)
	{
		a[i] = rand() % 5 + 3;
	}
}

void showArray(int a[], int size)
{
    int i;
	cout << "Original array a [ ] = {";
	for(i=0; i < size - 1;i++)
		cout << a[i] << ",";
	cout << a[i] << " } " << endl;
}

void showReverse(int a[], int size)
{
   int i;
   int temp;
   for (int i = 0; i < size/2; ++i)
   {
      temp = a[i];
      a[i] = a[size-i-1];
      a[size-i-1] = temp;
   }
 	cout << "Reversed array a [ ] = {";
	for(i=0; i < size - 1;i++)
		cout << a[i] << ",";
	cout << a[i] << " } " << endl;
}

int lowest(int a[], int size)
{
    int i;
    int smallest = a[0];

    for(i = 0; i <= size-1; i++)
    {
        if (a[i]<=smallest && i!=size-1)
        {
            smallest=a[i];

        }
        else if (a[i]<= smallest && i==size-1)
        {
            smallest=a[i];
            cout << smallest << endl;
        }
    }
    cout << "The lowest value is " << smallest << endl;
}

int highest(int a[], int size)
{
    int i;
    int largest = a[24];

    for(i = 0; i <= size-1; i++)
    {
        if (a[i]>=largest && i!=size-1)
        {
            largest=a[i];
        }
    }
    cout << "The highest value is " << largest << endl;
}

int sumArray(int a[], int size)
{
    int i;
    int sum = 0;
    for (i=0; i < size; i++)
	{
		sum+=a[i];
	}
	cout << "The sum of all the integers are: " << sum << endl;
}

float averageVal(int a[], int size)
{
    int i;
    float sum = 0;
    for (i=0; i < size; i++)
	{
		sum+=a[i];
	}
    cout << "The average of the array is : "<< sum/size << endl;
}

int count5(int five,int a[], int size)
{
    if(size == 0) return 0;
    return (5 == *a) + count5(five, a+1, size -1);
}

int firstMinusLast(int a[], int size)
{
    cout<< "The difference between the first and last array elements is " << a[0] - a[24]<< endl;;
}

void showBeforeIndex(int a[], int size, int index)
{
    cout << "The array values before Index " << index << " are: ";
    int i;
    for(i = 0; i < index; i++)
    {
        if (i != 0)
            cout << a[i] << ",";
        else
            cout << a[i] << ",";
    }
    cout << endl;
}

void done()
{
	cout << "I am now done with CSS1! WOOHOO!";
}

/*
Making an array of 25 random integers from 3 to 7
Original array a [ ] = {7,4,7,5,5,7,6,5,7,3,7,4,7,5,5,3,5,6,5,4,7,4,3,6,3 }
Reversed array a [ ] = {3,6,3,4,7,4,5,6,5,3,5,5,7,4,7,3,7,5,6,7,5,5,7,4,7 }
The lowest value is 3
The highest value is 7
The sum of all the integers are: 130
The average of the array is : 5.2
The number five appears 7 times.
The difference between the first and last array elements is -4
The array values before Index 11 are: 3,6,3,4,7,4,5,6,5,3,5,
I am now done with CSS1! WOOHOO!*/
