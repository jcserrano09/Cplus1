//p11ValidateDistance.cpp
//Joseph Charles Serrano
//Started 9/18/16 Ended 9/18/16
//Write a program that allows the user to enter a time in seconds, and then outputs distance of how far (feet) an object will land. Program must make sure that the time is positive

#include <iostream>
using namespace std;

int main()
{
	int Sec;
	cout << "Please enter the time in seconds: ";	//Input the time
	cin >> Sec;

	if (Sec < 0)	//If statement for time less than 0
	{
		cout << "Error! Incorrect Input, the time must be positive!\n";

		cout << "Please enter the time in seconds: ";
		cin >> Sec;
		//Assuming that the acceleration is 32ft / sec^2
		cout << "Distance = (32 * ("<<Sec<<"^2) / 2 = "<<(32 * (Sec^2)) / 2<<" feet";  //Distance formula is D = Acceleration*(Time^2)/2
	}
	//Else statement if time is inputed correctly
	else
	{		//Assuming that the acceleration is 32ft / sec^2
		cout << "Distance = (32 * ("<<Sec<<"^2 ) / 2 = "<<(32 * (Sec^2)) / 2<< " feet";	//Distance formula is D = Acceleration*(Time^2)/2
	}
}

/*
Please enter the time in seconds: -1
Error! Incorrect Input, the time must be positive!
Please enter the time in seconds: 12
Distance = (32 * (12^2) / 2 = 224 feet
*/
/*
Please enter the time in seconds: 6
Distance = (32 * (6^2 ) / 2 = 64 feet
*/
