// Program name: p2OutputPrint.cpp
// Name: Joseph Charles Serrano
// Date:  Started 9/4/16 Completed 9/4/16
// Description:  Write a program that prints out "CS!" in large block letters inside a border of *** followed by two blank lines and the message "Computer Science is Cool Stuff"

#include <iostream> //Need this for COUT and CIN
using namespace std; //Need this for COUT and CIN

int main() // The start of the program
{
	cout << "************************************************\n"; // First Border
	cout << "  C C C                 S S S\n";
	cout << " C      C              S     S\n";
	cout << " C                      S\n";
	cout << " C                      S\n";
	cout << " C                        S S S \n";			// The CS
	cout << " C                             S \n";
	cout << " C                     S      S\n";
	cout << " C      C               S S S\n";
	cout << "  C C C\n ";
	cout << "************************************************\n"; //  End Border
	cout << " Computer Science is Cool Stuff!!"; // The quote
	return 0;
}
/* ************************************************
 *   C C C                 S S S
 *  C      C              S     S
 *  C                      S
 *  C                      S
 *  C                        S S S
 *  C                             S
 *  C                     S      S
 *  C      C               S S S
 *   C C C
 *  ************************************************
 *  Computer Science is Cool Stuff!! */
