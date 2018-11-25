//p33bPointers.cpp
//Joseph Charles Serrano
// Started: 10/16/16 Ended 10/16/16
/*
Declare and Initialize a float variable L to 10.5.
Declare a float pointer *P.
Make P equal to the memory address of L.
Change the value of the variable L to 5.1 using the pointer *P.
Show (cout << ) the value of L using:
The Variable L
The Pointer *P
*/

#include <iostream>
using namespace std;

int main()
{
	float L=10.5;

	float *P;

	P = &L;

	*P = 5.1;

	cout << *P << endl;
	cout << L << endl;
}

/*
5.1
5.1
*/
