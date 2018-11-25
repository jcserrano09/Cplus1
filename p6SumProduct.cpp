// p6SumProduct.cpp
// Joseph Charles Serrano
// Started 9/11/16 Ended 9/11/16
// Description: Write a C++ program that reads in two decimal numbers and then outputs their sum and product.

#include <iostream>
#include <iomanip>
using namespace std;  // Input/Output

int main() //Start
{
	double x;
	cout << "Please enter num1: \n";   //The first number
	cin >> x;

	double y;
	cout << "Please enter num2: \n";  //The second number
	cin >> y;

	cout << "The sum is: " << fixed <<  " "<<setprecision(1) <<" "<< x+y <<" \n";	//Sum
	cout << "The product is: "<< fixed << " "<<setprecision(2) <<" "<< x*y <<"  \n";	//Product

	return 0; //End
}

/*
  Please enter num1:
  43.7654
  Please enter num2:
  52.847
  The sum is:   96.6
  The product is:   2312.87
*/
