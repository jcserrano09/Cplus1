//p54ArrayRandom.cpp
//Joseph Charles Serrano
// 12/14/16
//Make an ARRAY1 of X random ELEMENTS.
//Make an ARRAY2 which has all the ELEMENTS of ARRAY2, but in REVERSE and DOUBLED
//Each array ELEMENT has a random value N.

#include <iostream>
#include <stdlib.h>
#include <ctime>
#include <vector>
using namespace std;


void reverse(int [], int);


int main()
{
	int X;
	int N;


	srand(time(0));

	X = rand()%20 + 10;

	cout << "Making an array of "<<X<<" numbers and storing them in Array1.\n";
	const int * const sPtr = &X;
	int Array[ *sPtr ];

	for(int N=0; N<X; N++)
    {
        cout << rand()%100 + 100<<endl;
    }
    cout << "\n";

    cout << "Putting the doubled values of ARRAY1 into ARRAY2 in REVERSE\n";

	
	return 0;
}





