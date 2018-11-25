//p33NumbersRandom.cpp
//Joseph Charles Serrano
// Started: 10/16/16 Ended 10/16/16
/*
Write a program that generates X random integers Num.
Num is a random number between 20 to 50.
X is a random number between 10 to 15.
Calculate and show the Smallest, Largest, Sum, and Average of those numbers.
*/

#include <iostream>
#include <ctime>
#include <stdlib.h>
using namespace std;

int main()
{
	int smallest, largest, sum;
	int num;
	int numcount = rand()% 5+10;

	srand(time(0));

    for(int i = 0; i < numcount; i++)
    {
        num = rand()% 30+20;

        cout << num << ",";
        sum = sum + num;

        if(i==0)
            smallest = num;
        else if(num < smallest)
            smallest = num;

        if(i==0)
            largest = num;
        else if(num > largest)
            largest = num;
    }

	cout << "The average of "<< numcount <<" numbers is: \n\n"<< sum/numcount <<".\n\n";
	cout << "The smallest number is: "<< smallest <<".\n\n";
	cout << "The largest number is: "<< largest <<".\n\n";
	cout << "The sum is: "<<sum<<".";
}


/*
38,33,43,37,29,23,48,43,46,26,23,The average of 11 numbers is:

390221.

The smallest number is: 23.

The largest number is: 48.

The sum is: 4292437.
*/

