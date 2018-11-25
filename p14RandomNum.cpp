//p14RandomNum.cpp
//Joseph Charles Serrano
//Started 9/25/16 Finished 9/25/16
/*Write a program that generates a random number between 10 to 25
The program then shows the random number generated and informs the user whether it's even or odd*/

#include <iostream>
#include <stdlib.h>     //for the rand() and the srand()
#include <ctime>    //Allows for time()

using namespace std;

int main()
{

	int RandNumb;    // Random Number Variable

	srand(time(0));  //Allows for a new random number when one runs the program.

	RandNumb = 10 + rand()%15;  //The random number generators between 10-25

	cout << "Generating a Random Number between 10 and 25: "<< RandNumb <<"\n";

	if(RandNumb%2 == 0)     // the If/Else statement for even/odd numbers
	{
		cout << "The random number "<< RandNumb <<" is even.\n";    //even
	}
	else
	{
		cout << "The random number "<< RandNumb <<" is odd.\n";     //odd
	}

return 0;
}


/*
Generating a Random Number between 10 and 25: 21
The random number 21 is odd.

Generating a Random Number between 10 and 25: 12
The random number 12 is even.
*/
