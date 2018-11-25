//pMidtermProgram.cpp
//Joseph Charles Serrano
//Started 11/7/16 Ended 11/7/16
/*
Write a C++ program that accepts the lengths of three sides (a,b,c) of a triangle as input from the user.

The program output should indicate whether or not the triangle is an Equilateral Triangle, a Right Triangle or some Other type of triangle.

Set up the program so the user can choose to repeat the program, if desired.

Test your program for the 3 types of triangles, and submit the output with your C++ program.
*/

#include<iostream>
using namespace std;

int main()
{
	int a, b, c;
	int numAnsw;

	while(true)
	{
        cout << "Please enter side length a: \n";
        cin >> a;

        cout << "Please enter side length b: \n";
        cin >> b;

        cout << "Please enter side length c: \n";
        cin >> c;

        if(a*a + b*b == c*c)	//right triangle
            cout << "Right Triangle\n";
        else if(a==b && b==c)
            cout << "Equilateral Triangle\n";	//equilateral triangle
        else
            cout << " Other \n";	//neither of them

		cout << "Continue? Y(1) or N(2): ";   //The Repeat Statement
		cin >> numAnsw;
			if(numAnsw == 1)
				numAnsw = 0;
			else
				break;
	}

}


/*
Please enter side length a:
1
Please enter side length b:
2
Please enter side length c:
3
 Other
Continue? Y(1) or N(2): 1
Please enter side length a:
2
Please enter side length b:
2
Please enter side length c:
2
Equilateral Triangle
Continue? Y(1) or N(2): 1
Please enter side length a:
3
Please enter side length b:
4
Please enter side length c:
5
Right Triangle
Continue? Y(1) or N(2): 2
*/
