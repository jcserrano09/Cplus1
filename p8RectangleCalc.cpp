// p8RectangleCalc.cpp
// Joseph Charles Serrano
// Started 9/11/16 Ended 9/11/16
// Write a program which asks the user for the width and height of a rectangle, and then calculates and shows the area and perimeter of the shape rounded to 1 decimal.

/*
INPUT: Ask the user to enter float variables Width and Hight of a rectangle.
PROCESSING: Compute the Area and Perimeter of the rectangle.
OUTPUT: Show the Area and Perimeter of the rectangle rounded to 1 decimal.
*/

#include <iostream> // Input/Output
#include <iomanip> //SetPrecision
using namespace std;

int main()
{
	double h;
	cout << "Please enter height: "; // height
	cin >> h; //height input

	double w;
	cout << "Please enter width: ";   //width
	cin >> w;  //width input

	cout << "Area: " << fixed <<  " "<<setprecision(1) <<"" << h*w << " \n";          //Area
	cout << "Perimeter: " << fixed <<  " "<<setprecision(1) <<" "<< 2 *(h+w) <<" ";   //Perimeter

	return 0;  // end
}
/*
Please enter height: 24.64
Please enter width: 12.82
Area:  315.9
Perimeter:   74.9
*/
