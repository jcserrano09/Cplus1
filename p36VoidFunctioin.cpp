//p36VoidFunction.cpp
//Joseph Charles Serrano
//Started 10/23/16 Ended 10/23/16
/*
Write the definition of a function that does not return a value and has no parameters.
The function shows a random number between -10 to 10.
The function also informs the user whether the number is positive or negative.
*/

#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

void randomNum();

int main()
{
	int iseed = time(NULL);
	srand(iseed);

	cout << "Function call 1: " << endl;
	randomNum();
	cout << "Function call 2: " << endl;
	randomNum();
}

void randomNum()
{
    int Min = -10;
	int Max = 10;

	int randNum = Min + rand() %(Max - Min + 1);
	cout << "The random number between -10 & 10: " << randNum << endl;

	if(randNum < 0)
		cout << "Negative\n";
	else
		cout << "Positive\n";
}

/*
Function call 1:
The random number between -10 & 10: 8
Positive
Function call 2:
The random number between -10 & 10: -7
Negative
*/
