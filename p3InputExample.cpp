/* p3InputExample.cpp
Joseph Charles Serrano
Started: 9/4/16 Finished: 9/4/16
Description: Examples of -VARIABLES: Initialization and Declaration
						 -INPUT: cin >>
						 -OUTPUT: cout <<
*/

#include <iostream>
using namespace std;

int main()
{
	// DECLARE variables
	double weight; // DOUBLE - 8 bytes, has a decimal, Ex: 3.14, 2.21
	float height; // FLOAT - 4 bytes, has a decimal, Ex: 3.14, 2.21
	int Age; // INTEGER - 4 bytes, NO decimal, Ex: 1.00, 3.00

	// INITIALIZE variables
	weight = 183.54;
	height = 6.0;

	// OUTPUT: Prompt the user to enter age
	cout << "Please enter a whole number for age: ";
	// INPUT: The user types something on the keyboard, and presses Enter
	cin >> Age; // INITIALIZE Age to whatever the user enters
	// OUTPUT: Show the value of variables, and whatever the user entered
	cout << "Weight = " << weight << "\n" << "Height = " << height << "\n";
	cout << "The entered age was: " << Age << "\n";
	cout.setf(ios::fixed); // To specify fixed point notation
	cout.setf(ios::showpoint); // To specify that the decimal point will always be shown
	cout.precision(1); // To specify that ONE decimal place will always be shown
	cout << "The weight with 1 decimal is " << weight << endl;

	return 0;
}
/*
 * Please enter a whole number for age: 15
 * Weight = 183.54
 * Height = 6
 * The entered age was: 15
 * The weight with 1 decimal is 183.5
 */
