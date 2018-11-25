//p23SumInclusive.cpp
//Joseph Charles Serrano
//Started 10/2/16 Ended 10/2/16
/*
Write a program to find the sum of every integer number from 150 to 250 inclusive.
Also show the total count of numbers AND the average of the numbers.
*/

#include<iostream>
using namespace std;

int main()
{

	int sum = 0;
    int total = 0;
    //variables for the total amount of numbers, and the sum of numbers

	for(int x = 150; x <= 250; x++)
	{
		sum = sum + x; //The numbers are being added inclusive
		total++;
	}

    cout << "Sum of 150 to 250 inclusively is: ";
    cout << sum << endl;	//Shows the sum

    int avg = sum/total;    //Variable for the average

    cout << "Average of all the numbers: ";
    cout << avg << endl;		// The average is the sum divided by the total of numbers

	cout << "Total amount of numbers: " << total << endl;
	//displays the total
}


/*
Sum of 150 to 250 inclusively is: 20200
Average of all the numbers: 200
Total amount of numbers: 101
*/
