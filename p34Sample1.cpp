//p34Sample1.cpp
//Joseph Charles Serrano
//Started 10/23/16 Ended 10/23/16
//Write down the Sample Program on Functions

#include <iostream>
using namespace std;


void showMessage();
void aParameter(int parameter_variable);
int returnValue(int num1, int num2);


int main()
{
	showMessage();

	aParameter(10);

	int add = returnValue(20,30);
	cout << "add = " << add << endl;
	return 0;
}

void showMessage()
{
	cout << "Hello World!" << endl;
}

void aParameter(int parameter_variable)
{
	cout << "parameter_variable = " << parameter_variable << endl;
}

int returnValue(int num1, int num2)
{
	int sum;
	sum = num1 + num2;
	return sum;
}

/*
Hello World!
parameter_variable = 10
add = 50
*/
