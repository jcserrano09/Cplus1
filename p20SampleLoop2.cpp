//p20SampleLoop2.cpp
//Joseph Charles Serrano
// Started 10/2/16 Finished 10/2/16
//Type up the sample program

#include <iostream>
using namespace std;

int main()
{
	int R = 0, num;
	while (R < 3) // repeats until R is less than 3
	{
		cout << "INSIDE WHILE, r = " << R << endl;
		R += 1; // R = R + 1; same as R++;
	}

	int Age = -10;
	//OR
	while ( (Age < 0) || (Age > 123) ) // repeats while ONE condition IS TRUE
	{
		cout << "Please enter a valid age: ";
		cin >> Age;
	}

	//AND
	while ( (Age > 0) && (Age < 123) )
	{
		cout << "Age is correct, enter invalid age to stop loop: ";
		cin >> Age;
	}

	//BREAK AND CONTINUE
	while (true) // a loop that will go on forever
	{
		cout << "Please enter 1 to stop and 2 to repeat the loop: ";
		cin >> num;
		if (num == 1)
			break; // ends the while loop
		else if (num == 2)
			continue; // makes the while loop resume from the beginning
		cout << "Does this ever show?\n";
	}
	return 0;
}

/*
INSIDE WHILE, r = 0
INSIDE WHILE, r = 1
INSIDE WHILE, r = 2
Please enter a valid age: 15
Age is correct, enter invalid age to stop loop: 21
Age is correct, enter invalid age to stop loop: 32
Age is correct, enter invalid age to stop loop: 322
Please enter 1 to stop and 2 to repeat the loop: 2
Please enter 1 to stop and 2 to repeat the loop: 2
Please enter 1 to stop and 2 to repeat the loop: 2
Please enter 1 to stop and 2 to repeat the loop: 0
Does this ever show?
Please enter 1 to stop and 2 to repeat the loop: 1
*/
