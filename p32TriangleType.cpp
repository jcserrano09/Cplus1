//p32TriangleType.cpp
//Joseph Charles Serrano
// Started: 10/16/16 Ended 10/16/16
//Write a program which asks the user to type in the length of three sides of a triangle: a, b, c

#include<iostream>
using namespace std;

int main()
{
	int a;
	int b;
	int c;

	cout << "Please enter side length a: \n";
	cin >> a;

	cout << "Please enter side length b: \n";
	cin >> b;

	cout << "Please enter side length c: \n";
	cin >> c;

	if(a*a + b*b == c*c)	//right triangle
		cout << "(right triangle)";
	else if(a==b && b==c)
		cout << "(equilateral triangle)";	//equilateral triangle
    else if(a==b || a==c || b==c)
        cout << "(isosceles triangle)";
	else
		cout << "(Nothing shows)";	//neither of them
}
