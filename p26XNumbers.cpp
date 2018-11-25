//p26XNumbers.cpp
//Joseph Charles Serrano
//Started 10/9/16 Ended 10/9/16
/*Description: Write a program to find the largest, smallest, sum, and average of X numbers entered by the user.
The program will prompt the user to enter X, and X numbers, pressing the Enter key after each number entered.
Output will show the largest, smallest, sum, and average of all numbers */

#include <iostream>
using namespace std;

int main()
{
	char X;
	int NumCount, num, smallest, largest;
	int sum = 0;


	cout << "Enter X to start: ";   //Start the program
	cin >> X;

	cout << "Enter X Numbers: ";    //Amount of numbers
	cin >> NumCount;

	for(int i=0; i < NumCount; i++)
	{
		cout << "Please enter a number: ";
		cin >> num;
		sum = sum + num;    //Numbers are added up

		if(i == 0)
			smallest = num;
		else if (num < smallest)       //Find the smallest number
			smallest = num;

		if(i == 0)
			largest = num;
		else if(num > largest)      //Find the largest number
			largest = num;
	}

	cout << "The smallest of the "<< NumCount <<" numbers is: ";
	cout << smallest << endl;

	cout << "The largest of the "<< NumCount <<" numbers is: ";
	cout << largest << endl;

	cout << "The average of the "<< NumCount <<" numbers is: ";
	cout << sum/NumCount << endl;   //The sum is divided by the Numcount in order to find the average
}

/*
Enter X to start: X
Enter X Numbers: 4
Please enter a number: 13
Please enter a number: 1
Please enter a number: 15
Please enter a number: 22
The smallest of the 4 numbers is: 1
The largest of the 4 numbers is: 22
The average of the 4 numbers is: 12
*/
