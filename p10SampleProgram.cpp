//p10SampleProgram.cpp
//Joseph Charles Serrano
//Started 9/18/16 Ended 9/18/16
//Type up the sample program

#include <iostream>
using namespace std;

int main()
{
	int Age;
	cout << "Please enter your age: ";
	cin >> Age;

	//IF, ELSE IF, ELSE chain
	if (Age < 0)	// and IF gets checked ALWAYS to see if it is TRUE/FALSE
	{
		cout << "Age is LESS than zero, invalid age";
	}
	else if (Age < 18)		// else if gets checked only when previous IF is FALSE
	{
		cout << "Age is LESS than 18";
	}
	else if (Age == 20)		// this gets checked only when previous ELSE IF is FALSE
	{
		cout << "Age is EQUAL to 20";
	}
	else if (Age != 21)		// this gets checked only when previous ELSE IF is FALSE
	{
		cout << "Age is NOT EQUAL to 21";
	}
	else		// Happens automatically when previous ELSE IF is FALSE
	{
		cout << "Age must be (not < 0), (not < 18), (not == 18) and (not != 21)";
	}

	//OR (||): One of the conditions must be true for IF to happen
	// if (condition1) || (condition)
	if ( (Age < 0) || (Age > 123) )
	{
		cout << "Age is either less than 0 or greater than 123";
	}

	//AND (&&): BOTH of the conditions must be true for IF to happen
	// if (condition1) && (condition2)
	if ( (Age > 18) && (Age < 21) )
	{
		cout << "Age is BOTH (greater than 18) AND (less than 21)" << endl;
	}

	// NESTED IF's, an IF inside another IF
	if ( Age > 18)
	{
		if (Age < 21)
		{
			cout << "Age is BOTH (greater than) AND (less than 21)" << endl;
		}
	}
}

/* Please enter your age: 15
Age is LESS than 18 */
/*
Please enter your age: 21
Age must be (not < 0), (not < 18), (not == 18) and (not != 21) */
