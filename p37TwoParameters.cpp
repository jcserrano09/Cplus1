//p37TwoParameters.cpp
// Joseph Charles Serrano
// Started 10/23/16 Ended 10/23/16
/*
Write the definition of a function that does not return a value and has two parameters num1 and num2.
The function checks to see if num1 is evenly divisible by num2.
The function shows a message num1 is "Divisible" or "Not Divisible" by num2
*/

#include <iostream>
using namespace std;

void isDivisble(int num1, int num2);

int main()
{
	cout << "Function call 1: " << endl;
	isDivisble(6,3);
	cout << "Function call 2: " << endl;
	isDivisble(7,3);
}

void isDivisble(int num1, int num2)
{
	int Divisible = num1 % num2;

	if(Divisible == 0)
		cout << "The number " <<num1<< " is divisible to " <<num2<< endl;
	else
		cout << "The number " <<num1<< " is not divisible to " <<num2<< endl;
}

/*
Function call 1:
The number 6 is divisible to 3
Function call 2:
The number 7 is not divisible to 3
*/
