//p34Sample2.cpp
//Joseph Charles Serrano
//Started 10/23/16 Ended 10/23/16
//Write down the Sample Program on Variables and Scopes

#include <iostream>
using namespace std;

int Global_Variable = 1;

void aFunction(int parameterVariable);

int main()
{
	int Local_Variable = 5;
	cout << "===Inside the main(): " << endl;
	cout << "Local_Variable = " << Local_Variable << endl;
	cout << "Global_Variable = " << Global_Variable << endl;
	Global_Variable = 10;
	cout << "Global_Variable = " << Global_Variable << endl;

	aFunction(50);
	cout << "\n===Back Inside the main(): " << endl;
	cout << "Local_Variable = " << Local_Variable << endl;
	cout << "Global_Variable = " << Global_Variable << endl;
	return 0;
}

void aFunction(int parameterVariable)
{
	int Local_Variable = parameterVariable;
	cout << "\n===== Inside the aFunction(): " << endl;
	cout << "Local_Variable = " << Local_Variable << endl;
	cout << "Global_Variable = " << Global_Variable << endl;
	cout << "===== End Inside aFunction()======" << endl;
	Global_Variable = 100;
}

/*
===Inside the main():
Local_Variable = 5
Global_Variable = 1
Global_Variable = 10

===== Inside the aFunction():
Local_Variable = 50
Global_Variable = 10
===== End Inside aFunction()======

===Back Inside the main():
Local_Variable = 5
Global_Variable = 100
*/
