//p18ASCII.cpp
// Joseph Charles Serrano
//Started 9/25/16 Ended 9/25/16
/*
Write a C++ program, which declares a char variable letterOrNumber.
Ask the user to input any character from the keyboard into that letterOrNumber.
*/

#include <iostream>
using namespace std;

int main()
{
	char input;

	cout << "Please enter a number, letter, or something else: ";
	cin >> input;

	if(int(input) >= 65 && int(input) <= 90)        //A-Z int Cast
        cout << "You have entered an UpperCase letter";     // Upper Case Output

    else if(int(input) >= 97 && int(input) <= 122)      //a-z int Cast
        cout << "You have entered a LowerCase letter";      // Lower Case Output

    else if(int(input) >= 48 && int(input) <= 57)   //0-9 int cast
        cout << "You have entered a number";        // Number Output

    else
        cout << "This is neither a letter or a number";     //Neither Number/Letter Output

}

/*
Please enter a number, letter, or something else: %
This is neither a letter or a number

Please enter a number, letter, or something else: R
You have entered an UpperCase letter

Please enter a number, letter, or something else: k
You have entered a LowerCase letter

Please enter a number, letter, or something else: 0
You have entered a number
*/
