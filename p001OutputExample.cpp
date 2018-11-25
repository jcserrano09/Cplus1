/*
p001OutputExample.cpp
Joseph Charles Serrano
Started:9/3/16 Completed 9/4/16
Description: Examples of Output and Variables
*/

#include <iostream> //Need this for COUT and CIN
using namespace std; //Need this for COUT and CIN

int main() // The start of the program
{
	cout << "Hello"; // Everything in double quotes shows as is
	cout << "\n"; // \n inserts a new line, same as pressing the enter key
	cout << "Human" << "\n";

	//VARIABLES are named storage locationss for numbers, strings, characters
	//STRING is anything enclosed in quotes
	string myName = "Joseph"; //STRING variable "myName"
	cout << "Your name is: " << myName << "\n";

	// INTEGER is a whole number, with only ZERO after the decimal
	int wholeNum = 5.0; // INTEGER variable "wholeNum"
	cout << "The number stored in wholeNum is: " << wholeNum << "\n";

	// FLOAT or DOUBLE is a number where the decimal part is NOT zero
	float myFloat = 5.75;
	cout << "The number stored in myFloat is: " << myFloat << "\n";

	return 0; // This is where the program ends
}

/* Hello
 * Human
 * Your name is: Joseph
 * The number stored in wholeNum is: 5
 * The number stored in myFloat is: 5.75 */
