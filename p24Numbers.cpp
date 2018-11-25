//p24Numbers.cpp
//Joseph Charles Serrano
//Started 10/2/16 Ended 10/2/16
/*
Write a program to Input a set of numbers terminated by the value -999.
Find the average of all numbers, the largest number, and the smallest number.
*/

#include<iostream>
using namespace std;

int main()
{

	int num, smallest, largest;
	int sum = 0;
	int Numcount = 0;

	while(num != -999)
    {
		cout << "Enter a number: ";

		cin >> num;
		sum = sum + num;    //sum of the numbers
		Numcount++;         //the number of numbers

		if(Numcount == 0)
            smallest = num;
        else if(num < smallest)     //smallest number
            smallest = num;

        if(Numcount == 0)
            largest = num;
        else if(num > largest)      //largest number
            largest = num;
    }

    cout << "The average of "<< Numcount <<" numbers is: "<< sum/Numcount<<".\n";
    cout << "The smallest number is "<<smallest<<".\n";
    cout << "The largest number is "<<largest<<".\n";
    //Display the values
}

/*
Enter a number: 132
Enter a number: 12
Enter a number: 22
Enter a number: 4
Enter a number: -999
The average of 5 numbers is: -165.
The smallest number is -999.
The largest number is 132.
*/
