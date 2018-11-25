//functions.cpp
//Joseph Charles Serrano	(MIDTERMS)
// Started 11/7/16 Ended 11/7/16
/*
Write both functions, and test them from the main().

Save as functions.cpp

Function 1:
Write the function necessary to create and return a random number between 10 and 20, inclusive. Show the returned value in the main().

Function 2:
Write a function which takes three float parameters: num1, num2 and num3. The function displays their average..
*/

#include <iostream>
#include <ctime>
#include <stdlib.h>
using namespace std;

void Avg(float num1, float num2, float num3);
void RandNum();

int main()
{
	RandNum();

	Avg(12, 10, 5);

	return 0;
}

void RandNum()
{
	srand(time(0));
	int numRand = rand()% 10+10;

	cout << "Random Number = "<<numRand<<" \n";
}

void Avg(float num1, float num2, float num3)
{
	int count = 0;
	float sum = (num1 + num2 + num3);
	count++;

    float Average = sum/count;

	cout <<"The average is: "<<Average<<"\n";
}

/*
Random Number = 17
The average is: 27
*/
