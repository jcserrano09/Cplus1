//p40ParameterString.cpp
//Joseph Charles Serrano
//Started 11/8/16 Ended 11/8/16
/*
Given two integer values, A and B, write a function that returns the string "Great" if either value is 6.
The function also returns "Great" if the sum or the difference of the values is 6.
The function returns "Not great" otherwise
*/

#include <iostream>
using namespace std;

string great(int A, int B);

int main()
{
	cout << great(3,4) << endl;

	string storeString;
	storeString = great(4,6);
	cout << storeString << endl;
	cout << great(5,3) << endl;
	cout << great(1,5) << endl;
}

string great(int A, int B)
{
	if(A == 6 || B == 6)
		cout << "";
    else if(A+B == 6 || A-B == 6)
		cout << "";
	else
		cout << "Not ";

	return "Great!";
}


/*
Not Great!
Great!
Not Great!
Great!
*/
