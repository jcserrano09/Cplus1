//p15LetterGrade.cpp
//Joseph Charles Serrano
// Started 9/25/16  Ended 9/25/16
//Write a program which asks the user for a student's grade as a percent, and then returns their letter grade.

#include <iostream>
using namespace std;

int main()
{
	int Grade;  //variable for grade

	cout << "Please enter a numbered grade: \n";
	cin >> Grade;

	if(90 <= Grade && Grade <=100)     //Range for A
	{
		cout << "You have an A";		//Outcome for A
	}

	else if(80 <= Grade && Grade <= 89)     //Range for B
	{
		cout << "You have a B";		//Outcome for B
	}

	else if(70 <= Grade && Grade <= 79)     //Range for C
	{
		cout << "You have a C";		//Outcome for C
	}

	else if(60 <= Grade && Grade <= 69)     //Range for D
	{
		cout << "You have a D";		//Outcome for D
	}

	else if(Grade <= 59)        //Range for F
	{
		cout << "You have an F";		//Outcome for F
	}

	else
	{
		cout << "This is an inapplicable Grade";	//For any number grade that doesn't have a letter grade
	}

	return 0;
}


/*
Please enter a numbered grade:
98
You have an A

Please enter a numbered grade:
83
You have a B

Please enter a numbered grade:
75
You have a C

Please enter a numbered grade:
66
You have a D

Please enter a numbered grade:
30
You have an F

Please enter a numbered grade:
110
This is an inapplicable Grade
*/
