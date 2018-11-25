// p7OutputC.cpp
// Joseph Charles Serrano
// Started 9/11/16, Ended 9/11/16
// Write a program that asks for a character INPUT from the keyboard and then OUTPUTS a large block letter "C" composed of that character.

#include <iostream>  //Input/output
using namespace std; //Input/Output

int main() // Start
{
    char V;
    cout << "Please enter a letter into variable V: "; //Where the user input's their letter
    cin >> V;

    // The letters used in the picture C would depend on the user's input letter.
	cout << "************************************************\n"; // First Border
	cout << "\n";
    cout << "      " << V << " "<< V << " " << V << "    \n";
    cout << "     "<< V <<"      "<< V <<"        \n";
    cout << "    "<< V <<"                 \n";
    cout << "    "<< V <<"                   \n";
    cout << "    "<< V <<"                      \n";
    cout << "    "<< V <<"                       \n";
    cout << "    "<< V <<"                      \n";
    cout << "     "<< V <<"      "<< V <<"              \n";
    cout << "       "<< V <<" "<< V <<" "<< V <<"                 \n";

	cout << "************************************************\n"; //  End Border
	cout << " Computer Science is Cool Stuff!!"; // The quote


	return 0; // End the Program
}


//Please enter a letter into variable V: h
//************************************************
//
//      h h h
//     h      h
//    h
//    h
//    h
//    h
//    h
//     h      h
//       h h h
//************************************************
// Computer Science is Cool Stuff!!


