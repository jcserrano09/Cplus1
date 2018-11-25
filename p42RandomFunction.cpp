//p42RandomFunction.cpp
//Joseph Charles Serrano
//Started 11/8/16 Ended 11/8/16
//Write the definition of a function that returns a random number based on two arguments MIN, and MAX typed by the user.

#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;

int randint(int min, int max);

int main()
{
    int min, max;
	cout << "Enter the minimum and maximum numbers for the range: \n";
	cout << "Min: ";
	cin >> min;
	cout << "Max: ";
	cin >> max;

	randint(min, max);
}

int randint(int min, int max)
{
	int RandNumb;

	srand(time(0));

	RandNumb =rand()%(max-min + 1) + min;

	cout << "Random number between "<<min<<" and "<<max<<": "<<RandNumb;
}

/*
Enter the minimum and maximum numbers for the range:
Min: 20
Max: 30
Random number between 20 and 30: 24
*/

/*
Enter the minimum and maximum numbers for the range:
Min: 5
Max: 15
Random number between 5 and 15: 12
*/

