//p12HeightMessage
//Joseph Charles Serrano
//Started 9/18/16 Ended 9/18/16
//Write the following program to compute a person's height and print out a message. The user will input feet and inches. The program will convert that to inches, then print a message, based on the total inches. Be sure to have your program output match mine

#include <iostream>
using namespace std;	// INPUT/OUTPUT

int main()
{
	int feet;
	int inches; // Inputs

	cout << "Please enter feet: \n";
	cin >> feet; 	// The feet

	cout << "Please enter inches: \n";
	cin >> inches; // The inches

	cout << "Your height is "<<feet<<" feet + "<<inches<<" inches = "<< (feet*12) + inches <<" inches\n";
	// Feet is converted to inches so that they can be added
	if (((feet*12) + inches) > 72)
	{
		cout << "You are tall!";	// Tall message
	}

	else if(((feet*12) + inches) < 60)
	{
		cout << "You are vertically challenged!"; //Short Message
	}

	else
	{
		cout << "You are between 5' and 6'!"; // Average Height Message
	}
}

/*
Please enter feet:
5
Please enter inches:
6
Your height is 5 feet + 6 inches = 66 inches
You are between 5' and 6'!

Please enter feet:
6
Please enter inches:
1
Your height is 6 feet + 1 inches = 73 inches
You are tall!

Please enter feet:
4
Please enter inches:
10
Your height is 4 feet + 10 inches = 58 inches
You are vertically challenged!
*/
